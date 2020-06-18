#include <iostream>
#include <exception>
#include <stdexcept>
#include <functional>
#include "spdlog/spdlog.h"
#include "rtc/include.hpp"

#include "../includes/network-manager.hpp"
#include "../../proto/request-root.pb.h"

//NetworkManager networkManager;

NetworkManager::NetworkManager() {
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

    auto result = this->clientConnectionsById.insert({id, std::make_unique<ClientConnection>(id)});
    if (!result.second) {
        // connection already exists, close connection and create new?
        throw std::runtime_error("Connection with the same id already exists");
    }
    std::unique_ptr<ClientConnection> &clientConnection = result.first->second;

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

void NetworkManager::handleMessage(std::string clientId, binary message) {
    std::string binaryString(reinterpret_cast<const char *>(&message[0]), message.size());
    multiplayer::RequestRoot requestRoot;
    requestRoot.ParseFromString(binaryString);

    spdlog::info("Message parsed");

    if (requestRoot.has_spawnrequest()) {
        spdlog::info("Has spawn request");
    }
}