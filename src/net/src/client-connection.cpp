#include "spdlog/spdlog.h"

#include "../includes/client-connection.hpp"
#include "../includes/network-manager.hpp"
#include "../../util/includes/converter.hpp"

typedef rtc::PeerConnection::GatheringState GatheringState;
typedef rtc::PeerConnection::State State;
typedef std::shared_ptr<std::promise<void>> shared_promise;

template <class T> std::weak_ptr<T> make_weak_ptr(std::shared_ptr<T> ptr) { return ptr; }

shared_promise ClientConnection::connect(
    WebRtcNegotiationClientParams &clientParams,
    WebRtcNegotiationServerParams &serverParams,
    rtc::Configuration &webRtcConfig
) {
    auto promise = std::make_shared<std::promise<void>>();
    spdlog::info("Offer: {}", clientParams.offer);
    rtc::InitLogger(rtc::LogLevel::Verbose);

    //this->peerConnection = std::make_unique<rtc::PeerConnection>(webRtcConfig);
    this->peerConnection2 = std::make_shared<rtc::PeerConnection>(webRtcConfig);
    //this->peerConnection2 = peerConnection;

    this->peerConnection2->onLocalDescription([&serverParams](const rtc::Description &sdp) {
        serverParams.answer = sdp;
    });
    this->peerConnection2->onLocalCandidate([&serverParams](const rtc::Candidate &candidate) {
        spdlog::debug("Got local candidate: {}", candidate.candidate());
        serverParams.iceCandidates.emplace_back(candidate);
    });
    // ([this]
    this->peerConnection2->onStateChange([](State state) {
        spdlog::debug("PeerConnection state: {}", utils::toString<State>(state));
        if ((state == State::Disconnected) || (state == State::Failed) || (state == State::Closed)) {
            //this->closed = true;
            // this->closedCallback();
        }
    });
    // [weakPromise = make_weak_ptr(promise)]
    this->peerConnection2->onGatheringStateChange([weakPromise = make_weak_ptr(promise)](GatheringState state) {
        spdlog::debug("PeerConnection gathering state: {}", utils::toString<GatheringState>(state));
        if (state == GatheringState::Complete) {
            auto promise = weakPromise.lock();
            if (promise) {
                promise->set_value();
            }
        }
    });
	/*this->peerConnection2->onDataChannel([&](std::shared_ptr<rtc::DataChannel> _dc) {
        spdlog::debug("Got a DataChannel with label: {}", _dc->label());
        this->dataChannel = _dc;
    });*/

    try {
        rtc::Description description(clientParams.offer, "offer");
        this->peerConnection2->setRemoteDescription(description);
        spdlog::info("Set remote description");
        // adding remote candidates is optional, because browser will attempt to connect when received remote candidates
        /*for (const auto &candidate : clientParams.iceCandidates) {
            peerConnection->addRemoteCandidate(candidate);
        }*/
    } catch (const std::exception &e) {
        spdlog::error("Failed to set remote description and candidates, error: {}", e.what());
        throw e;
    }

    //promise->get_future().wait();

    //promise->set_value();
    return promise;
}

void ClientConnection::onClosed(std::function<void()> callback) {
    this->closedCallback = callback;
}

bool ClientConnection::isClosed() {
    return this->closed;
}