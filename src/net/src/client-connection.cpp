#include "../includes/client-connection.hpp"
#include "../includes/network-manager.hpp"

std::future<WebRtcNegotiationServerParams> ClientConnection::connect(WebRtcNegotiationClientParams webRtcNegotiationClientParams) {
    WebRtcNegotiationServerParams webRtcNegotiationServerParams;
    // rtc::InitLogger(rtc::LogLevel::Verbose);
    // use client ip as peer connection id
    // allow one peer connection and data channel for same client

    spdlog::debug("Offer: {}", webRtcNegotiationClientParams.offer);

    std::promise<void> promise;

    // maybe use unique_ptr instead (make_unique)
    auto peerConnection = std::make_shared<rtc::PeerConnection>(webRtcConfig);
    peerConnection->onLocalDescription([&webRtcNegotiationServerParams](const rtc::Description &sdp) {
        webRtcNegotiationServerParams.answer = sdp;
    });
    peerConnection->onLocalCandidate([&webRtcNegotiationServerParams](const rtc::Candidate &candidate) {
        webRtcNegotiationServerParams.iceCandidates.emplace_back(candidate);
    });
    // set this callback in ClientConnection to access this
    peerConnection->onStateChange([](rtc::PeerConnection::State state) {
        spdlog::debug("PeerConnection state: {}", utils::toString(state));
        // TODO
        //  if state == closed || state == failed delete peerConnection (and datachannel)
        //  also when datachannel is closed close peerConnection? (maybe we can add future to recreate data-channel?)
    });
    peerConnection->onGatheringStateChange([&promise](rtc::PeerConnection::GatheringState state) {
        spdlog::debug("PeerConnection gathering state: {}", utils::toString(state));
        if (state == rtc::PeerConnection::GatheringState::Complete) {
            promise.set_value();
        }
    });

	peerConnection->onDataChannel([&](std::shared_ptr<rtc::DataChannel> _dc) {
        spdlog::debug("Got a DataChannel with label: {}", _dc->label());
        networkManager.dataChannels.emplace_back(_dc);
    });

    try {
        peerConnection->setRemoteDescription(webRtcNegotiationClientParams.offer);
        // adding remote candidates is optional, because browser will attempt to connect when received remote candidates
        /*for (const auto &candidate : webRtcNegotiationClientParams.iceCandidates) {
            peerConnection->addRemoteCandidate(candidate);
        }*/
    } catch (const std::exception &e) {
        spdlog::error("Failed to set remote description and candidates, error: {}", e.what());
        throw e;
    }

    networkManager.peerConnection = peerConnection;
}