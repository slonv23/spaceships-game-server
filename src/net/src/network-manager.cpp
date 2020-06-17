#include <iostream>
#include <exception>
#include <stdexcept>
#include "spdlog/spdlog.h"
#include "rtc/include.hpp"

#include "../includes/network-manager.hpp"

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

    clientConnection->onMessage([](binary message) {
        spdlog::debug("NetworkManager: OK");
    });

    WebRtcNegotiationServerParams webRtcNegotiationServerParams;
    auto negotiationParamsReadyPromise = clientConnection->connect(webRtcNegotiationClientParams, webRtcNegotiationServerParams, this->webRtcConfig);
    negotiationParamsReadyPromise->get_future().wait();

    return webRtcNegotiationServerParams;
}
