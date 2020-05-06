#include <ctype.h>
#include <string>
#include <regex>
#include <map>
#include "served/served.hpp"
#include "../includes/signaling-server.hpp"

#include "spdlog/spdlog.h"

SignalingServer::~SignalingServer() {
    if (this->server != nullptr) {
        delete this->server;
    }
}

char xdigit_to_num(char c) {
    if (!isxdigit(c)) {
        throw std::logic_error("not an hex digit");
	}

    return (c < 'A' ? c - '0' : toupper(c) - 'A' + 10);
}


char x2digits_to_num(char c1, char c2) {
    if (!isxdigit(c1) || !isxdigit(c2)) {
		throw std::logic_error("not an hex digit");
	}
        
    return ((xdigit_to_num(c1) << 4) + xdigit_to_num(c2));
}

std::map<std::string, std::string> parseQuery(const std::string& query) {
    std::map<std::string, std::string> data;
    std::regex pattern("([\\w+%]+)=([^&]*)");
    auto words_begin = std::sregex_iterator(query.begin(), query.end(), pattern);
    auto words_end = std::sregex_iterator();

    for (std::sregex_iterator i = words_begin; i != words_end; i++) {
        std::string key = (*i)[1].str();
        std::string value = (*i)[2].str();
        data[key] = value;
    }

    return data;
}

std::string unescape(const std::string& s){
    // avoid copying if there's nothing to unescape
    if (s.empty() || s.find('%') == std::string::npos) {
        return s;
	}

    std::string result;
    result.reserve(s.size());

    for (std::string::const_iterator i = s.begin(); i != s.end(); ++i) {
        if (*i == '%' && (i+1) != s.end() && (i+2) != s.end()
			 && isxdigit(*(i+1)) && isxdigit(*(i+2))
			 && ((*(i+1)) != 0 || (*(i+2)) != 0)
		) {
            char c = x2digits_to_num(*(i+1),*(i+2));
            result += c;
            i += 2; // increment the iterator
        } else {
            result += (*i);
		}
    }

    result.reserve(); // shrink to fit

    return result;
}

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
				auto map = parseQuery(unescape(req.body()));
				auto search = map.find("test");
				if (search != map.end()) {
					spdlog::info("Test key value: " + search->second);
				}
				
				spdlog::info("Body data: " + unescape(req.body()));
				res << "Body data: " << unescape(req.body());
			}
		});

	// Create the server and run with 1 handler threads (not blocking mode)
	this->server = new served::net::server("0.0.0.0", "8080", mux);
	this->server->run(1, true);
}

SignalingServer signalingServer;