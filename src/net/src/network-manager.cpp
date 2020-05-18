#include <iostream>
#include <exception>
#include <stdexcept>
#include "spdlog/spdlog.h"
#include "rtc/include.hpp"

#include "../includes/network-manager.hpp"

NetworkManager networkManager;

NetworkManager::NetworkManager() {
    webRtcConfig.iceServers.emplace_back("stun.l.google.com:19302");
}

WebRtcNegotiationServerParams NetworkManager::connectClient(std::string id, WebRtcNegotiationClientParams &webRtcNegotiationClientParams) {
    std::unique_ptr<ClientConnection> &clientConnection;
    auto result = this->clientConnectionsById.insert({id, std::make_unique<ClientConnection>(id)});
    if (!result.second) {
        // connection already exists, close connection and create new?
        throw std::runtime_error("Connection with the same id already exists");
    } else {
        clientConnection = result.first->second;
    }

    clientConnection->onClosed([&]() {
        this->clientConnectionsById.erase(id);
    });

    auto webRtcNegotiationServerParamsFuture = clientConnection->connect(webRtcNegotiationClientParams, this->webRtcConfig);
    webRtcNegotiationServerParamsFuture.wait();

    return webRtcNegotiationServerParamsFuture.get();
}
