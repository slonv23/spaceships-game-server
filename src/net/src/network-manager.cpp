#include "spdlog/spdlog.h"
#include <iostream>
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
        webRtcNegotiationServerParams.answer = sdp; //std::string(sdp);
    });
    peerConnection->onLocalCandidate([&webRtcNegotiationServerParams](const rtc::Candidate &candidate) {
        webRtcNegotiationServerParams.iceCandidates.emplace_back(candidate);
    });
    peerConnection->onStateChange([](rtc::PeerConnection::State state) {
        // TODO we can use spdlog with objects implementing << operator
        std::cout << "State 1: " << state << std::endl;
    });
    peerConnection->onGatheringStateChange([&promise](rtc::PeerConnection::GatheringState state) {
        std::cout << "Gathering state 1: " << state << std::endl;
        // compare if complete
        if (state == rtc::PeerConnection::GatheringState::Complete) {
            promise.set_value();
        }
        //spdlog::info("WebRtc state: " + std::to_string(state));
    });

	peerConnection->onDataChannel([&](std::shared_ptr<rtc::DataChannel> _dc) {
		std::cout << "[Got a DataChannel with label: " << _dc->label() << "]" << std::endl;
    });

    try {
        rtc::Description description(webRtcNegotiationClientParams.offer, "offer");
        peerConnection->setRemoteDescription(description); // webRtcNegotiationClientParams.offer
        for (const auto &candidate : webRtcNegotiationClientParams.iceCandidates) {
            peerConnection->addRemoteCandidate(candidate);
        }
    } catch (const std::exception &e) {
        std::cout << "Error!" << e.what() << std::endl;
    }

    std::future<void> future = promise.get_future();
    future.wait();

    return webRtcNegotiationServerParams;
}
