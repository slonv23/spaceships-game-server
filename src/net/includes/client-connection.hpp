#pragma once
#include <memory>
#include <string>
#include <future>
#include <functional>
#include <cstddef>
#include <atomic>
#include "rtc/rtc.hpp"

struct WebRtcNegotiationClientParams;
struct WebRtcNegotiationServerParams;

typedef std::shared_ptr<std::promise<void>> shared_promise;

using binary = std::vector<std::byte>;

class ClientConnection {
    public:
        ClientConnection(std::string id): id{id}, requestPending{false} {};

        shared_promise connect(
            WebRtcNegotiationClientParams &clientParams,
            WebRtcNegotiationServerParams &serverParams,
            rtc::Configuration &webRtcConfig);

        void onClosed(std::function<void()> callback);
        void onMessage(std::function<void(binary &)> callback);

        bool isClosed();
        bool isReady();

        void sendMessage(binary const& message);

        std::string id;
        int controlledObjectId = 0;
        std::atomic_bool requestPending;
        std::deque<std::string> lastActionIds;
    private:
        bool closed = false; // 'false' indicates that connection is opening or open
        std::shared_ptr<rtc::PeerConnection> peerConnection;
        std::shared_ptr<rtc::DataChannel> dataChannel;
        std::function<void()> closedCallback;
        std::function<void(binary &)> messageCallback;
};
