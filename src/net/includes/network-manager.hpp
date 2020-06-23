#pragma once
#include <string>
#include <memory>
#include <map>
#include <future>
#include "rtc/rtc.hpp"

#include "client-connection.hpp"
#include "../../proto/request-root.pb.h"
#include "../../world-simulator-ipc/includes/ipc-connection.hpp"

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
        NetworkManager(IpcConnection &_ipcConnection);
        ~NetworkManager();
        WebRtcNegotiationServerParams connectClient(std::string id, WebRtcNegotiationClientParams &webRtcNegotiationClientParams);
        void completeRequest(int requestId, binary &message);
        void broadcast(binary &message);

        std::map<std::string, std::shared_ptr<ClientConnection>> clientConnectionsById;
    private:
        rtc::Configuration webRtcConfig;
        std::map<int, std::weak_ptr<ClientConnection>> clientConnectionByRequestId;
        int lastUsedRequestId = 1;
        IpcConnection &ipcConnection;

        void handleMessage(std::string clientId, binary &message);
        bool issueRequest(std::string clientId, multiplayer::RequestRoot &requestRoot);
        inline int generateRequestId() {
            this->lastUsedRequestId += 2;
            return this->lastUsedRequestId;
        }
};
