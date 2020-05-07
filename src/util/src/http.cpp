#include "../includes/http.hpp"
#include <ctype.h>
#include <regex>

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


/*std::map<std::string, std::string> parseQuery(const std::string& query) {
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
}*/

httpUtils::QueryParams* parseUrlencodedQuery(std::string query) {
    std::string unescapedQuery = unescape(query);

    httpUtils::QueryParams *queryParams = new httpUtils::QueryParams();

    // std::map<std::string, std::string> data;
    std::regex pattern("([\\w+%]+)=([^&]*)");
    auto words_begin = std::sregex_iterator(query.begin(), query.end(), pattern);
    auto words_end = std::sregex_iterator();

    for (std::sregex_iterator i = words_begin; i != words_end; i++) {
        std::string key = (*i)[1].str();
        std::string value = (*i)[2].str();

        queryParams->addParamValue(key, value);
        // data[key] = value;
    }

    return queryParams;
}

void httpUtils::QueryParams::addParamValue(std::string key, std::string value) {
    auto search = this->paramValuesByKey.find(key);
    if (search != this->paramValuesByKey.end()) {
        auto params = search->second;
        params->insert(params->end(), value);
    } else {
        auto params = new std::list<std::string>();
        this->paramValuesByKey.insert({key, params});
    }
}