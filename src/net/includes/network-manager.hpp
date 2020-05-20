#include <string>
#include <memory>
#include <map>
#include <future>
#include "rtc/rtc.hpp"

#include "client-connection.hpp"

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
        ~NetworkManager();
        WebRtcNegotiationServerParams connectClient(std::string id, WebRtcNegotiationClientParams &webRtcNegotiationClientParams);
    private:
        rtc::Configuration webRtcConfig;
        std::map<std::string, std::unique_ptr<ClientConnection>> clientConnectionsById;
};

extern NetworkManager networkManager;
