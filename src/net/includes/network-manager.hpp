#include <string>
#include <memory>
#include <list>
#include <future>
#include "rtc/rtc.hpp"

struct WebRtcNegotiationClientParams {
    std::string offer;
    std::list<std::string> iceCandidates;
};

struct WebRtcNegotiationServerParams {
    std::string answer;
    std::list<std::string> iceCandidates;
};

class NetworkManager {
    public:
        NetworkManager();
        WebRtcNegotiationServerParams connectClient(WebRtcNegotiationClientParams &webRtcNegotiationClientParams);
    private:
        std::shared_ptr<rtc::PeerConnection> peerConnection;
        rtc::Configuration webRtcConfig;
        std::list<std::shared_ptr<rtc::DataChannel>> dataChannels;
};

extern NetworkManager networkManager;
