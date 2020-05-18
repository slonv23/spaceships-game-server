#include <iostream>
#include <exception>
#include "spdlog/spdlog.h"
#include "rtc/include.hpp"

#include "../includes/network-manager.hpp"

NetworkManager networkManager;

NetworkManager::NetworkManager() {
    webRtcConfig.iceServers.emplace_back("stun.l.google.com:19302");
}

WebRtcNegotiationServerParams NetworkManager::connectClient(std::string id, WebRtcNegotiationClientParams &webRtcNegotiationClientParams) {
    auto clientConnection = std::make_unique<ClientConnection>(id);
    this->clientConnectionsById.insert({id, std::move(clientConnection)});
    clientConnection->onClosed([&]() {
        this->clientConnectionsById.erase(id);
    });

    auto webRtcNegotiationServerParamsFuture = clientConnection->connect(webRtcNegotiationClientParams, this->webRtcConfig);
    webRtcNegotiationServerParamsFuture.wait();

    return webRtcNegotiationServerParamsFuture.get();
}
