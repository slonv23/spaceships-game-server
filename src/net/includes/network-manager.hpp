#pragma once
#include <string>
#include <memory>
#include <map>
#include <future>
#include <mutex>
#include "rtc/rtc.hpp"

#include "client-connection.hpp"
#include "../../proto/request-root.pb.h"
#include "../../proto/response-root.pb.h"
#include "../../world-simulator-ipc/includes/ipc-connection.hpp"

struct WebRtcNegotiationClientParams {
    std::string offer;
    std::list<std::string> iceCandidates;
};

struct WebRtcNegotiationServerParams {
    std::string answer;
    std::list<std::string> iceCandidates;
};

class PendingAck {
    public:
        int originalRequestId;
        std::weak_ptr<ClientConnection> clientConnection;
        PendingAck(int originalRequestId, std::weak_ptr<ClientConnection> clientConnection): originalRequestId{originalRequestId},
                                                                                             clientConnection{clientConnection} {};
};

class NetworkManager {
    public:
        NetworkManager(IpcConnection &_ipcConnection);
        ~NetworkManager();
        WebRtcNegotiationServerParams connectClient(std::string id, WebRtcNegotiationClientParams &webRtcNegotiationClientParams);
        void completeRequest(int requestId, multiplayer::ResponseRoot &responseRoot);
        void broadcast(binary &message);
    private:
        std::map<std::string, std::shared_ptr<ClientConnection>> clientConnectionsById;
        mutable std::mutex connectionsMutex;
        rtc::Configuration webRtcConfig;
        
        mutable std::mutex addPendingAckMutex;
        std::map<int, PendingAck> pendingAcknowledgementsByRequestId;
        int lastUsedRequestId = 1;
        IpcConnection &ipcConnection;

        void handleMessage(std::shared_ptr<ClientConnection> clientConnection, binary &message);
        bool issueRequest(std::string clientId, multiplayer::RequestRoot &requestRoot, bool retransmitResponse = true);
        void sendAck(std::string clientId, int requestId, unsigned long int requestSentTimestamp);
        inline int generateRequestId() {
            this->lastUsedRequestId += 2;
            return this->lastUsedRequestId;
        }
};
