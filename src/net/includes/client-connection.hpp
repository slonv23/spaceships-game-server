#pragma once
#include <memory>
#include <string>
#include <future>
#include "rtc/rtc.hpp"

struct WebRtcNegotiationClientParams;

struct WebRtcNegotiationServerParams;

class ClientConnection {
    public:
        ClientConnection(std::string id) : id{id} {};

        std::future<WebRtcNegotiationServerParams> connect(
            WebRtcNegotiationClientParams &webRtcNegotiationClientParams,
            rtc::Configuration &webRtcConfig);

        void onClosed(std::function<void()> callback);

        bool isClosed();

    private:
        std::string id;
        bool closed = false; // false indicates that connection is opening or open
        std::unique_ptr<rtc::PeerConnection> peerConnection;
        std::shared_ptr<rtc::DataChannel> dataChannel;
        std::function<void()> closedCallback;
};
