#include <memory>
#include <string>
#include <future>
#include "rtc/include.hpp"

struct WebRtcNegotiationClientParams;

struct WebRtcNegotiationServerParams;

class ClientConnection {
    public:
        ClientConnection(std::string id);
        std::future<WebRtcNegotiationServerParams> connect(WebRtcNegotiationClientParams webRtcNegotiationClientParams);
        void onClosed(std::function<void()> callback);
    private:
        std::string id;
        std::unique_ptr<rtc::PeerConnection> peerConnection;
        std::shared_ptr<rtc::DataChannel> dataChannel;
};
