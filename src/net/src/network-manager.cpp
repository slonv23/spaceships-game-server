#include <iostream>
#include <exception>
#include "spdlog/spdlog.h"

#include "../includes/network-manager.hpp"

NetworkManager networkManager;

NetworkManager::NetworkManager() {
    webRtcConfig.iceServers.emplace_back("stun.l.google.com:19302");
}

WebRtcNegotiationServerParams NetworkManager::connectClient(WebRtcNegotiationClientParams &webRtcNegotiationClientParams) {
    WebRtcNegotiationServerParams webRtcNegotiationServerParams;

    std::promise<void> promise;

    auto peerConnection = std::make_shared<rtc::PeerConnection>(webRtcConfig);
    peerConnection->onLocalDescription([&webRtcNegotiationServerParams](const rtc::Description &sdp) {
        webRtcNegotiationServerParams.answer = sdp;
    });
    peerConnection->onLocalCandidate([&webRtcNegotiationServerParams](const rtc::Candidate &candidate) {
        webRtcNegotiationServerParams.iceCandidates.emplace_back(candidate);
    });
    peerConnection->onStateChange([](rtc::PeerConnection::State state) {
        spdlog::debug("PeerConnection state: {}", state);
    });
    peerConnection->onGatheringStateChange([&promise](rtc::PeerConnection::GatheringState state) {
        spdlog::debug("PeerConnection gathering state: {}", state);
        // compare if complete
        if (state == rtc::PeerConnection::GatheringState::Complete) {
            promise.set_value();
        }
    });

	peerConnection->onDataChannel([&](std::shared_ptr<rtc::DataChannel> _dc) {
        spdlog::debug("Got a DataChannel with label: {}", _dc->label());
        networkManager.dataChannels.emplace_back(_dc);
    });

    try {
        rtc::Description description(webRtcNegotiationClientParams.offer, "offer");
        peerConnection->setRemoteDescription(description);
        for (const auto &candidate : webRtcNegotiationClientParams.iceCandidates) {
            peerConnection->addRemoteCandidate(candidate);
        }
    } catch (const std::exception &e) {
        spdlog::error("Failed to set remote description and candidates, error: {}", e.what());
        throw e;
    }

    networkManager.peerConnection = peerConnection;

    std::future<void> future = promise.get_future();
    future.wait();

    return webRtcNegotiationServerParams;
}
