#include <ctype.h>
#include <regex>
#include <sstream>
#include <ios>
#include <iomanip>

#include "../includes/http.hpp"

using std::string;

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

string unescape(const string& s){
    // avoid copying if there's nothing to unescape
    if (s.empty() || s.find('%') == string::npos) {
        return s;
	}

    string result;
    result.reserve(s.size());

    for (string::const_iterator i = s.begin(); i != s.end(); ++i) {
        if (*i == '+') {
            result += " ";
        } else if (*i == '%' && (i+1) != s.end() && (i+2) != s.end()
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

string escape(const string& s) {
    std::ostringstream escaped;
    escaped.fill('0');
    escaped << std::hex;

    for (string::const_iterator i = s.begin(), n = s.end(); i != n; ++i) {
        string::value_type c = (*i);

        // keep alphanumeric and other accepted characters intact
        if (isalnum((unsigned char) c) || c == '-' || c == '_' || c == '.' || c == '~') {
            escaped << c;
            continue;
        }

        // any other characters are percent-encoded
        escaped << std::uppercase;
        escaped << '%' << std::setw(2) << int((unsigned char) c);
        escaped << std::nouppercase;
    }

    return escaped.str();
}

utils::QueryParams utils::parseUrlencodedQuery(string query) {
    query = unescape(query);

    utils::QueryParams queryParams;

    std::regex pattern("([\\w+%]+)=([^&]*)");
    auto words_begin = std::sregex_iterator(query.begin(), query.end(), pattern);
    auto words_end = std::sregex_iterator();

    for (std::sregex_iterator i = words_begin; i != words_end; i++) {
        string key = (*i)[1].str();
        string value = (*i)[2].str();

        queryParams.addParamValue(key, value);
    }

    return queryParams;
}

void utils::QueryParams::addParamValue(string key, string value) {
    auto search = this->paramValuesByKey.find(key);
    if (search != this->paramValuesByKey.end()) {
        auto params = search->second;
        params.push_back(value);
    } else {
        std::list<string> params;
        params.push_back(value);
        this->paramValuesByKey.insert({key, params});
    }
}

void utils::QueryParams::addParamValues(string key, string_list values) {
    auto search = this->paramValuesByKey.find(key);
    if (search != this->paramValuesByKey.end()) {
        auto params = search->second;
        params.merge(values);
    } else {
        this->paramValuesByKey.insert({key, values});
    }
}

std::optional<string> utils::QueryParams::getParamValue(string key) {
    auto search = this->paramValuesByKey.find(key);
    if (search != this->paramValuesByKey.end()) {
        auto params = search->second;
        return std::optional<string>(params.front());
    }

    return std::nullopt;
}

std::optional<string_list> utils::QueryParams::getParamValues(string key) {
    auto search = this->paramValuesByKey.find(key);
    if (search != this->paramValuesByKey.end()) {
        return std::optional<string_list>(search->second);
    }

    return std::nullopt;
}

string utils::QueryParams::toUrlencodedQuery() {
    std::ostringstream query;

    std::map<std::string, string_list>::iterator it = this->paramValuesByKey.begin();
	while (it != this->paramValuesByKey.end()) {
		string key = it->first;
 
        for (const auto &value : it->second) {
            query << escape(key) << '=' << escape(value) << '&';
        }

		it++;
	}

    auto result = query.str();
    result.pop_back();

    return result;
}