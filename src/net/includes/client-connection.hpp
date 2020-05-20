#pragma once
#include <memory>
#include <string>
#include <future>
#include "rtc/rtc.hpp"

struct WebRtcNegotiationClientParams;
struct WebRtcNegotiationServerParams;

typedef std::shared_ptr<std::promise<void>> shared_promise;

class ClientConnection {
    public:
        ClientConnection(std::string id) : id{id} {};

        shared_promise connect(
            WebRtcNegotiationClientParams &clientParams,
            WebRtcNegotiationServerParams &serverParams,
            rtc::Configuration &webRtcConfig);

        void onClosed(std::function<void()> callback);

        bool isClosed();

    private:
        std::string id;
        bool closed = false; // false indicates that connection is opening or open
        //std::unique_ptr<rtc::PeerConnection> peerConnection;
        std::shared_ptr<rtc::PeerConnection> peerConnection2;
        std::shared_ptr<rtc::DataChannel> dataChannel;
        std::function<void()> closedCallback;
};
