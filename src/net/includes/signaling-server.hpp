#pragma once
#include <string>
#include "served/served.hpp"

#include "network-manager.hpp"

class SignalingServer {
    public:
        SignalingServer(NetworkManager &networkManager);
        ~SignalingServer();
        void start();
    private:
        std::map<std::string, int> numberOfConnectionsByIp;
        NetworkManager &networkManager;
        served::multiplexer mux;
        served::net::server *server = nullptr;

        std::string generateConnectionId(std::string ip);
};

//extern SignalingServer signalingServer;