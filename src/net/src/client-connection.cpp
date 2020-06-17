#include <thread>
#include <variant>
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
    //rtc::InitLogger(rtc::LogLevel::Verbose);

    this->peerConnection = std::make_shared<rtc::PeerConnection>(webRtcConfig);

    this->peerConnection->onLocalDescription([&serverParams](const rtc::Description &sdp) {
        serverParams.answer = sdp;
    });

    this->peerConnection->onLocalCandidate([&serverParams](const rtc::Candidate &candidate) {
        spdlog::debug("ClientConnection: Got local ice candidate: {}", candidate.candidate());
        serverParams.iceCandidates.emplace_back(candidate);
    });

    this->peerConnection->onStateChange([this](State state) {
        spdlog::debug("ClientConnection: Peer connection state: {}", utils::toString<State>(state));
        if ((state == State::Disconnected) || (state == State::Failed)) {
            this->peerConnection->close();
        } else if (state == State::Closed) {
            this->closed = true;
            if (this->closedCallback) {
                this->closedCallback();
            }
        }
    });

    this->peerConnection->onGatheringStateChange([weakPromise = make_weak_ptr(promise)](GatheringState state) {
        spdlog::debug("ClientConnection: Peer connection gathering state: {}", utils::toString<GatheringState>(state));
        if (state == GatheringState::Complete) {
            auto promise = weakPromise.lock();
            if (promise) {
                promise->set_value();
            }
        }
    });

	this->peerConnection->onDataChannel([this](std::shared_ptr<rtc::DataChannel> dataChannel) {
        spdlog::debug("ClientConnection: Got a DataChannel with label: {}", dataChannel->label());
        this->dataChannel = dataChannel;

        dataChannel->onClosed([&]() {
            spdlog::debug("ClientConnection: DataChannel with label '{}' closed", dataChannel->label());
            this->peerConnection->close();
        });

        dataChannel->onMessage([this](const std::variant<binary, std::string> &message) {
            if (std::holds_alternative<binary>(message)) {
                auto msgData = std::get<binary>(message);
                spdlog::debug("ClientConnection: Received {} bytes", msgData.size());
                this->messageCallback(msgData);
            }
        });


    });

    rtc::Description description(clientParams.offer, "offer");
    try {
        this->peerConnection->setRemoteDescription(description);
        // adding remote candidates is optional, because browser will attempt to connect when received remote candidates
        /*for (const auto &candidate : clientParams.iceCandidates) {
            peerConnection->addRemoteCandidate(candidate);
        }*/
    } catch (const std::exception &e) {
        spdlog::error("ClientConnection: Failed to set remote description and candidates, error: {}", e.what());
        throw e;
    }

    return promise;
}

void ClientConnection::onClosed(std::function<void()> callback) {
    this->closedCallback = callback;
}

void ClientConnection::onMessage(std::function<void(binary)> callback) {
    this->messageCallback = callback;
}

bool ClientConnection::isClosed() {
    return this->closed;
}

ClientConnection::~ClientConnection() {
    spdlog::debug("ClientConnection: Waiting for peer connection to close");

    if (!this->closed) {
        auto promise = std::make_shared<std::promise<void>>();
        this->onClosed([&promise]() {
            promise->set_value();
        });

        this->peerConnection->close();

        promise->get_future().wait();
    }

    spdlog::debug("ClientConnection: Peer connection closed");
}