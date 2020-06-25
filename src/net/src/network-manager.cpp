#include <iostream>
#include <exception>
#include <stdexcept>
#include <functional>
#include "spdlog/spdlog.h"
#include "rtc/include.hpp"

#include "../includes/network-manager.hpp"
#include "../../util/includes/io.hpp"

template <class T> std::weak_ptr<T> make_weak_ptr(std::shared_ptr<T> ptr) { return ptr; }

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

    auto result = this->clientConnectionsById.insert({id, std::make_shared<ClientConnection>(id)});
    if (!result.second) {
        // connection already exists, close connection and create new?
        throw std::runtime_error("Connection with the same id already exists");
    }
    std::shared_ptr<ClientConnection> &clientConnection = result.first->second;

    clientConnection->onClosed([&, id]() {
        spdlog::debug("NetworkManager: Client '{}' disconnected", id);
        this->clientConnectionsById.erase(id);
    });

    clientConnection->onMessage(std::bind(&NetworkManager::handleMessage, this, id, _1));

    WebRtcNegotiationServerParams webRtcNegotiationServerParams;
    auto negotiationParamsReadyPromise = clientConnection->connect(webRtcNegotiationClientParams, webRtcNegotiationServerParams, this->webRtcConfig);
    negotiationParamsReadyPromise->get_future().wait();

    return webRtcNegotiationServerParams;
}

void NetworkManager::handleMessage(std::string clientId, binary &message) {
    // TODO move this code segment to template method >>>
    int decodedBytes;
    int size = utils::decodeUnsignedVarint(reinterpret_cast<const std::uint8_t *>(&message[0]), decodedBytes);
    spdlog::info("Message size: {}", size);

    std::string binaryString(reinterpret_cast<const char *>(&message[decodedBytes]), size);
    multiplayer::RequestRoot requestRoot;
    requestRoot.ParseFromString(binaryString);
    // <<<<<<<<<<<<

    if (requestRoot.has_spawnrequest()) {
        spdlog::info("Received spawn request (nickname {})", requestRoot.spawnrequest().nickname());
        this->issueRequest(clientId, requestRoot);
    }
}

bool NetworkManager::issueRequest(std::string clientId, multiplayer::RequestRoot &requestRoot) {
    auto search = this->clientConnectionsById.find(clientId);
    if (search != this->clientConnectionsById.end()) {
        auto clientConnection = search->second;

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

    return false;
}

void NetworkManager::completeRequest(int requestId, binary &message) {
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
    }
}

void NetworkManager::broadcast(binary &message) {
    std::map<std::string, std::shared_ptr<ClientConnection>>::iterator it = this->clientConnectionsById.begin();
    while (it != this->clientConnectionsById.end()) {
        if (it->second->isReady()) {
            it->second->sendMessage(message);
        }
    }
}
