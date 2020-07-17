#include <iostream>
#include <exception>
#include <stdexcept>
#include <functional>
#include "spdlog/spdlog.h"
#include "rtc/include.hpp"

#include "../includes/network-manager.hpp"
#include "../../util/includes/io.hpp"
#include "../../proto/request-ack.pb.h"
#include "../../proto/response-root.pb.h"
#include "../../proto/input-action.pb.h"

template <class T> std::weak_ptr<T> make_weak_ptr(std::shared_ptr<T> ptr) { return ptr; }

template <class T> T decodeMessage(binary &message) {
    int decodedBytes;
    int size = utils::decodeUnsignedVarint(reinterpret_cast<const std::uint8_t *>(&message[0]), decodedBytes);

    std::string binaryString(reinterpret_cast<const char *>(&message[decodedBytes]), size);
    T decodedMessage;
    decodedMessage.ParseFromString(binaryString);

    return decodedMessage;
}

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
    multiplayer::RequestRoot requestRoot = decodeMessage<multiplayer::RequestRoot>(message);

    unsigned int requestSentTimestamp = requestRoot.requestsenttimestamp();
    if (requestSentTimestamp != 0) {
        this->sendAck(clientConnection->id, requestSentTimestamp);
    }
    if (requestRoot.has_spawnrequest()) {
        spdlog::info("Received spawn request (nickname {})", requestRoot.spawnrequest().nickname());
        this->issueRequest(clientConnection->id, requestRoot);
    } else if (requestRoot.has_inputaction()) {
        spdlog::debug("Received input action");
        if (!clientConnection->controlledObjectId) {
            spdlog::warn("Client #{} send input action, but has no object id assigned");
            return;
        }
        multiplayer::InputAction *inputAction = new multiplayer::InputAction(requestRoot.inputaction());
        inputAction->set_objectid(clientConnection->controlledObjectId);
        requestRoot.set_allocated_inputaction(inputAction);
        this->issueRequest(clientConnection->id, requestRoot, false);
    }
}

bool NetworkManager::issueRequest(std::string clientId, multiplayer::RequestRoot &requestRoot, bool retransmitResponse) {
    auto search = this->clientConnectionsById.find(clientId);
    if (search != this->clientConnectionsById.end()) {
        auto clientConnection = search->second;

        if (retransmitResponse) {
            bool requestPending = clientConnection->requestPending.load();
            if (!requestPending && clientConnection->requestPending.compare_exchange_strong(requestPending, true)) {
                int requestId = this->generateRequestId();
                this->clientConnectionByRequestId.insert({requestId, make_weak_ptr(clientConnection)});
                requestRoot.set_requestid(requestId);
                this->ipcConnection.writeMsg(requestRoot);
                return true;
            } else {
                return false;
            }   
        }
    }

    return false;
}

void NetworkManager::completeRequest(int requestId, binary &message) {
    std::scoped_lock lock{connectionsMutex};

    auto search = this->clientConnectionByRequestId.find(requestId);
    if (search == this->clientConnectionByRequestId.end()) {
        throw std::runtime_error("Cannot find client issued the request");
    }

    auto clientConnection = search->second.lock();
    if (clientConnection) {
        bool requestPending = clientConnection->requestPending.load();
        clientConnection->requestPending.compare_exchange_strong(requestPending, false);
        this->clientConnectionByRequestId.erase(requestId);
        clientConnection->sendMessage(message);
        if (!clientConnection->controlledObjectId) {
            multiplayer::ResponseRoot responseRoot = decodeMessage<multiplayer::ResponseRoot>(message);
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

void NetworkManager::sendAck(std::string clientId, unsigned int requestSentTimestamp) {
    auto search = this->clientConnectionsById.find(clientId);
    if (search != this->clientConnectionsById.end()) {
        auto clientConnection = search->second;
        if (clientConnection->isReady()) {            
            spdlog::info("Sending ack to client #{} (requestSentTimestamp={})", clientId, requestSentTimestamp);
            multiplayer::ResponseRoot responseRoot;
            multiplayer::RequestAck *requestAck = new multiplayer::RequestAck();
            requestAck->set_requestsenttimestamp(requestSentTimestamp);
            responseRoot.set_allocated_requestack(requestAck);
            // TODO move code below into separate method (e.g. 'serializeDelimited()')
            unsigned long int msgSize = responseRoot.ByteSizeLong();
            binary message(10 + msgSize); // 10 maximum varint size of timestamp
            int varintSize = utils::writeUnsignedVarint((uint8_t *const) message.data(), msgSize);

            responseRoot.SerializeWithCachedSizesToArray((unsigned char *) (message.data() + varintSize));
            message.resize(varintSize + msgSize);
            clientConnection->sendMessage(message);
        }
    }
}