#include <ctype.h>
#include <string>
#include <regex>
#include <map>
#include "served/served.hpp"

#include "../../util/includes/http.hpp"
#include "../includes/signaling-server.hpp"

#include "spdlog/spdlog.h"

void SignalingServer::start() {
	// GET /hello
	mux.handle("/sdp-offer")
		.get([](served::response &res, const served::request &req) {
			res << "Hello world!";
		});

	mux.handle("/form_post")
		.post([&](served::response & res, const served::request & req) {
			// check headers for the correct content type
			if (req.header("content-type") != "application/x-www-form-urlencoded") {
				// return 400 bad request if the content type is wrong for this example.
				served::response::stock_reply(400, res);
			} else {
				/*auto map = parseQuery(unescape(req.body()));
				auto search = map.find("test");
				if (search != map.end()) {
					spdlog::info("Test key value: " + search->second);
				}*/
                httpUtils::QueryParams *queryParams = httpUtils::parseUrlencodedQuery(req.body());
				
				spdlog::info("Body data: " + queryParams->getParamValue("test"));
				res << "Body data: " << queryParams->getParamValue("test");
			}
		});

	// Create the server and run with 1 handler threads (not blocking mode)
	this->server = new served::net::server("0.0.0.0", "8080", mux);
	this->server->run(1, true);
}

SignalingServer::~SignalingServer() {
    if (this->server != nullptr) {
        delete this->server;
    }
}

SignalingServer signalingServer;