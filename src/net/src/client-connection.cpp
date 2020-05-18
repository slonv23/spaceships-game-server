#include "spdlog/spdlog.h"

#include "../includes/client-connection.hpp"
#include "../includes/network-manager.hpp"
#include "../../util/includes/converter.hpp"

typedef rtc::PeerConnection::GatheringState GatheringState;
typedef rtc::PeerConnection::State State;

std::future<WebRtcNegotiationServerParams> ClientConnection::connect(
    WebRtcNegotiationClientParams &webRtcNegotiationClientParams,
    rtc::Configuration &webRtcConfig
) {
    // TODO webRtcNegotiationServerParams should be shared? maybe pass webRtcNegotiationServerParams& ref to fill external object
    WebRtcNegotiationServerParams webRtcNegotiationServerParams;
    std::promise<WebRtcNegotiationServerParams> promise;
    //rtc::InitLogger(rtc::LogLevel::Verbose);

    this->peerConnection = std::make_unique<rtc::PeerConnection>(webRtcConfig);

    this->peerConnection->onLocalDescription([&webRtcNegotiationServerParams](const rtc::Description &sdp) {
        webRtcNegotiationServerParams.answer = sdp;
    });
    this->peerConnection->onLocalCandidate([&webRtcNegotiationServerParams](const rtc::Candidate &candidate) {
        webRtcNegotiationServerParams.iceCandidates.emplace_back(candidate);
    });
    this->peerConnection->onStateChange([this](State state) {
        spdlog::debug("PeerConnection state: {}", utils::toString<State>(state));
        if ((state == State::Disconnected) || (state == State::Failed)
            || (state == State::Closed)
        ) {
            this->closed = true;
            this->closedCallback();
        }
    });
    this->peerConnection->onGatheringStateChange([&promise, &webRtcNegotiationServerParams](GatheringState state) {
        spdlog::debug("PeerConnection gathering state: {}", utils::toString<GatheringState>(state));
        if (state == GatheringState::Complete) {
            promise.set_value(webRtcNegotiationServerParams);
        }
    });

	this->peerConnection->onDataChannel([&](std::shared_ptr<rtc::DataChannel> _dc) {
        spdlog::debug("Got a DataChannel with label: {}", _dc->label());
        this->dataChannel = _dc;
    });

    try {
        this->peerConnection->setRemoteDescription(webRtcNegotiationClientParams.offer);
        // adding remote candidates is optional, because browser will attempt to connect when received remote candidates
        /*for (const auto &candidate : webRtcNegotiationClientParams.iceCandidates) {
            peerConnection->addRemoteCandidate(candidate);
        }*/
    } catch (const std::exception &e) {
        spdlog::error("Failed to set remote description and candidates, error: {}", e.what());
        throw e;
    }

    return promise.get_future();
}

void ClientConnection::onClosed(std::function<void()> callback) {
    this->closedCallback = callback;
}

bool ClientConnection::isClosed() {
    return this->closed;
}