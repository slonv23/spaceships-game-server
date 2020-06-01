#pragma once
#include "served/served.hpp"

#include "network-manager.hpp"

class SignalingServer {
    public:
        SignalingServer(NetworkManager &networkManager);
        ~SignalingServer();
        void start();
    private:
        NetworkManager &networkManager;
        served::multiplexer mux;
        served::net::server *server = nullptr;
};

//extern SignalingServer signalingServer;