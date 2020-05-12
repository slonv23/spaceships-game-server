#include <string>
#include <list>
#include <map>
#include <memory>
#include <optional>

typedef std::list<std::string> string_list;

namespace httpUtils {
    class QueryParams {
        public:
            std::string getParamValue(std::string key);
            std::optional<string_list> getParamValues(std::string key);
            void addParamValue(std::string key, std::string value);
            void addParamValues(std::string key, string_list value);
            std::string toUrlencodedQuery();
        private:
            std::map<std::string, string_list> paramValuesByKey;
    };

    QueryParams parseUrlencodedQuery(std::string query);
}