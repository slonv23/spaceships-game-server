#include <iostream>
#include <exception>
#include <stdexcept>
#include <functional>
#include "spdlog/spdlog.h"
#include "rtc/include.hpp"

#include "../includes/network-manager.hpp"
#include "../../util/includes/io.hpp"
#include "../../util/includes/protobuf.hpp"
#include "../../proto/request-ack.pb.h"
#include "../../proto/response-root.pb.h"
#include "../../proto/object-action.pb.h"

template <class T> std::weak_ptr<T> make_weak_ptr(std::shared_ptr<T> ptr) { return ptr; }

/*template <class T> T decodeMessage(binary &message) {
    int decodedBytes;
    int size = utils::decodeUnsignedVarint(reinterpret_cast<const std::uint8_t *>(&message[0]), decodedBytes);

    std::string binaryString(reinterpret_cast<const char *>(&message[decodedBytes]), size);
    T decodedMessage;
    decodedMessage.ParseFromString(binaryString);

    return decodedMessage;
}*/

NetworkManager::NetworkManager(IpcConnection &ipcConnection): ipcConnection(ipcConnection) {
    spdlog::info("Call NetworkManager constructor");
    //this->webRtcConfig.iceServers.emplace_back("stun.l.google.com:19302");
    this->webRtcConfig.portRangeBegin = 9001;
    this->webRtcConfig.portRangeEnd = 9010;
}

NetworkManager::~NetworkManager() {
    spdlog::info("Call NetworkManager destructor");
}

WebRtcNegotiationServerParams NetworkManager::connectClient(std::string id, WebRtcNegotiationClientParams &webRtcNegotiationClientParams) {
    using namespace std::placeholders;  // for _1, _2, _3...

    // TODO refactor, use 'find' to check if connection present,
    //  because use of 'insert' is not effective (newly created client connection will be immediately destroyed)
    auto result = this->clientConnectionsById.insert({id, std::make_shared<ClientConnection>(id)});
    if (!result.second) {
        // connection already exists, close connection and create new?
        throw std::runtime_error("Connection with the same id already exists");
    }
    std::shared_ptr<ClientConnection> &clientConnection = result.first->second;

    clientConnection->id = id;
    clientConnection->onClosed([&, id]() {
        spdlog::debug("NetworkManager: Client '{}' disconnected", id);
        std::scoped_lock lock{connectionsMutex};
        this->clientConnectionsById.erase(id);
    });

    clientConnection->onMessage(std::bind(&NetworkManager::handleMessage, this, clientConnection, _1));

    WebRtcNegotiationServerParams webRtcNegotiationServerParams;
    auto negotiationParamsReadyPromise = clientConnection->connect(webRtcNegotiationClientParams, webRtcNegotiationServerParams, this->webRtcConfig);
    negotiationParamsReadyPromise->get_future().wait();

    return webRtcNegotiationServerParams;
}

void NetworkManager::handleMessage(std::shared_ptr<ClientConnection> clientConnection, binary &message) {
    multiplayer::RequestRoot requestRoot = utils::decodeProtobufMessage<multiplayer::RequestRoot>(message);

    unsigned long int requestSentTimestamp = requestRoot.requestsenttimestamp();
    if (requestSentTimestamp != 0) {
        this->sendAck(clientConnection->id, requestRoot.requestid(), requestSentTimestamp);
    }
    if (requestRoot.has_spawnrequest()) {
        spdlog::info("Received spawn request (nickname {})", requestRoot.spawnrequest().nickname());
        this->issueRequest(clientConnection->id, requestRoot);
    } else if (requestRoot.has_objectaction()) {
        spdlog::debug("Received object action");
        if (!clientConnection->controlledObjectId) {
            spdlog::warn("Client #{} send input action, but has no object id assigned");
            return;
        }
        multiplayer::ObjectAction *objectAction = new multiplayer::ObjectAction(requestRoot.objectaction());
        objectAction->set_objectid(clientConnection->controlledObjectId);
        requestRoot.set_allocated_objectaction(objectAction);
        this->issueRequest(clientConnection->id, requestRoot, false);
    }
}

bool NetworkManager::issueRequest(std::string clientId, multiplayer::RequestRoot &requestRoot, bool retransmitResponse) {
    auto search = this->clientConnectionsById.find(clientId);
    if (search != this->clientConnectionsById.end()) {
        auto clientConnection = search->second;

        if (retransmitResponse) {
            {
                std::scoped_lock lock{addPendingAckMutex};
                int requestId = this->generateRequestId();
                this->pendingAcknowledgementsByRequestId.emplace(std::piecewise_construct,
                                                                std::forward_as_tuple(requestId),
                                                                std::forward_as_tuple(requestRoot.requestid(), make_weak_ptr(clientConnection)));
                requestRoot.set_requestid(requestId);
            }
        
            this->ipcConnection.writeMsg(requestRoot);
            return true;
        } else {
            this->ipcConnection.writeMsg(requestRoot);
            return true;
        }
    }

    return false;
}

void NetworkManager::completeRequest(int requestId, multiplayer::ResponseRoot &responseRoot/*binary &message*/) {
    std::scoped_lock lock{connectionsMutex};

    auto search = this->pendingAcknowledgementsByRequestId.find(requestId);
    if (search == this->pendingAcknowledgementsByRequestId.end()) {
        throw std::runtime_error("Cannot find client issued the request");
    }

    auto clientConnection = search->second.clientConnection.lock();
    if (clientConnection) {
        responseRoot.set_requestid(search->second.originalRequestId);
        binary message = utils::serializeProtobufMessageWithSize<multiplayer::ResponseRoot>(responseRoot);
        clientConnection->sendMessage(message);
        this->pendingAcknowledgementsByRequestId.erase(requestId);

        if (!clientConnection->controlledObjectId) {
            if (responseRoot.has_spawnresponse()) {
                clientConnection->controlledObjectId = responseRoot.spawnresponse().assignedobjectid();
            }
        }
    }
}

void NetworkManager::broadcast(binary &message) {
    std::scoped_lock lock{connectionsMutex};

    std::map<std::string, std::shared_ptr<ClientConnection>>::iterator it = this->clientConnectionsById.begin();
    while (it != this->clientConnectionsById.end()) {
        if (it->second->isReady()) {
            it->second->sendMessage(message);
        }
        it++;
    }
}

void NetworkManager::sendAck(std::string clientId, int requestId, unsigned long int requestSentTimestamp) {
    auto search = this->clientConnectionsById.find(clientId);
    if (search != this->clientConnectionsById.end()) {
        auto clientConnection = search->second;
        if (clientConnection->isReady()) {            
            spdlog::info("Sending ack to client #{} (requestSentTimestamp={}, requestId={})", clientId, requestSentTimestamp, requestId);
            multiplayer::ResponseRoot responseRoot;
            multiplayer::RequestAck *requestAck = new multiplayer::RequestAck();
            responseRoot.set_requestid(requestId);
            //requestAck->set_requestid(requestId);
            requestAck->set_requestsenttimestamp(requestSentTimestamp);
            responseRoot.set_allocated_requestack(requestAck);
            binary message = utils::serializeProtobufMessageWithSize<multiplayer::ResponseRoot>(responseRoot);
            clientConnection->sendMessage(message);
        }
    }
}