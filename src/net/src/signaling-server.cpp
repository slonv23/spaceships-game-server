#include <string>
#include <regex>
#include <map>
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
			res.set_header("access-control-allow-origin", "*");
			// check headers for the correct content type
			if (req.header("content-type") != "application/x-www-form-urlencoded") {
				// return 400 bad request if the content type is wrong for this example.
				served::response::stock_reply(400, res);
			} else {
				std::string source = req.source();

                httpUtils::QueryParams queryParams = httpUtils::parseUrlencodedQuery(req.body());
				WebRtcNegotiationClientParams webRtcNegotiationClientParams;

				if (auto paramValuesOptional = queryParams.getParamValues("candidates"s)) {
					auto paramValues = paramValuesOptional.value();

					webRtcNegotiationClientParams.iceCandidates = paramValues;
					webRtcNegotiationClientParams.offer = queryParams.getParamValue("offer"s);
					WebRtcNegotiationServerParams webRtcNegotiationServerParams = networkManager.connectClient(webRtcNegotiationClientParams);
					
					httpUtils::QueryParams response;
					response.addParamValue("answer"s, webRtcNegotiationServerParams.answer);
					response.addParamValues("candidates"s, webRtcNegotiationServerParams.iceCandidates);
					res << response.toUrlencodedQuery();
				} else {
					res.set_status(400);
					res << "Required params are missing";
				}


				spdlog::info("Body data: " + req.body());
			}
		});

	// Create the server and run with 1 handler threads (not not blocking mode)
	this->server = new served::net::server("0.0.0.0", "8080", mux);
	this->server->run(1, true);
}

SignalingServer::~SignalingServer() {
    if (this->server != nullptr) {
        delete this->server;
    }
}
