#include "served/served.hpp"

class SignalingServer {
    public:
        void start();
        ~SignalingServer();
    private:
        served::multiplexer mux;
        served::net::server *server = nullptr;
};

extern SignalingServer signalingServer;