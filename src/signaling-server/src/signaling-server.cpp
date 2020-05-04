#include "served/served.hpp"
#include "../includes/signaling-server.hpp"

SignalingServer::~SignalingServer() {
    if (this->server != nullptr) {
        delete this->server;
    }
}

void SignalingServer::start() {
	// GET /hello
	mux.handle("/sdp-offer")
		.get([](served::response &res, const served::request &req) {
			res << "Hello world!";
		});

	// Create the server and run with 1 handler threads (not blocking mode)
	this->server = new served::net::server("0.0.0.0", "8080", mux);
	this->server->run(1, true);
}

SignalingServer signalingServer;