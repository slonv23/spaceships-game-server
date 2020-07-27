#include <regex>
#include <map>
#include <exception>
#include "served/served.hpp"
#include "spdlog/spdlog.h"

#include "../../util/includes/http.hpp"
#include "../includes/signaling-server.hpp"
#include "../includes/network-manager.hpp"

using namespace std::string_literals;

//SignalingServer signalingServer;

SignalingServer::SignalingServer(NetworkManager &networkManager): networkManager(networkManager) {}

void SignalingServer::start() {
	mux.handle("/connect")
		.post([&](served::response & res, const served::request & req) {
			try {
				res.set_header("access-control-allow-origin", "*");

				if (req.header("content-type") != "application/x-www-form-urlencoded") {
					served::response::stock_reply(400, res);
				} else {
					std::string connectionId = this->generateConnectionId(req.source());
					spdlog::info("Establishing new connection #{}", connectionId);

					utils::QueryParams queryParams = utils::parseUrlencodedQuery(req.body());
					WebRtcNegotiationClientParams webRtcNegotiationClientParams;

					auto iceCandidatesOptional = queryParams.getParamValues("candidates"s);
					auto offerOptional = queryParams.getParamValue("offer"s);
					if (iceCandidatesOptional && offerOptional) {
						auto iceCandidates = iceCandidatesOptional.value();
						auto offer = offerOptional.value();

						webRtcNegotiationClientParams.iceCandidates = iceCandidates;
						webRtcNegotiationClientParams.offer = offer;
						WebRtcNegotiationServerParams webRtcNegotiationServerParams =
							this->networkManager.connectClient(connectionId, webRtcNegotiationClientParams);
						
						utils::QueryParams response;
						response.addParamValue("answer"s, webRtcNegotiationServerParams.answer);
						response.addParamValues("candidates"s, webRtcNegotiationServerParams.iceCandidates);
						res << response.toUrlencodedQuery();
					} else {
						res.set_status(400);
						res << "Required params are missing";
					}

					spdlog::info("Body data: " + req.body());
				}
			} catch (const std::exception &e) {
				res.set_status(503);
 				spdlog::error("Failed to process '/connect' request, error: {}", e.what());
			}
		});

	// Create the server and run with 2 handler threads (not blocking mode)
	this->server = new served::net::server("0.0.0.0", "8080", mux);
	this->server->run(2, false);
}

std::string SignalingServer::generateConnectionId(std::string ip) {
	const auto& result = this->numberOfConnectionsByIp.find(ip);
	if (result != this->numberOfConnectionsByIp.end()) {
		return ip + "." + std::to_string(++result->second);
	} else {
		this->numberOfConnectionsByIp.insert({ip, 1});
		return ip + ".1";
	}
}

SignalingServer::~SignalingServer() {
    if (this->server != nullptr) {
        delete this->server;
    }
}
