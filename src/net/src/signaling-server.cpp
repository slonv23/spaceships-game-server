#include <string>
#include <regex>
#include <map>
#include <exception>
#include "served/served.hpp"
#include "spdlog/spdlog.h"

#include "../../util/includes/http.hpp"
#include "../includes/signaling-server.hpp"
#include "../includes/network-manager.hpp"

using namespace std::string_literals;

SignalingServer signalingServer;

void SignalingServer::start() {
	mux.handle("/connect")
		.post([&](served::response & res, const served::request & req) {
			try {
				res.set_header("access-control-allow-origin", "*");

				if (req.header("content-type") != "application/x-www-form-urlencoded") {
					served::response::stock_reply(400, res);
				} else {
					std::string source = req.source();
					spdlog::info("Client id: {}", source);

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
							networkManager.connectClient(source, webRtcNegotiationClientParams);
						
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
 				spdlog::error("Failed to process '/connect' request, error: {}", e.what());
			}
		});

	// Create the server and run with 1 handler threads (not not blocking mode)
	this->server = new served::net::server("0.0.0.0", "8080", mux);
	this->server->run(1, true);
	// this->server
}

SignalingServer::~SignalingServer() {
    if (this->server != nullptr) {
        delete this->server;
    }
}
