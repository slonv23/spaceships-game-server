#include <string>
#include <list>
#include <map>

typedef std::list<std::string>* string_list;

namespace httpUtils {
    class QueryParams {
        public:
            ~QueryParams();
            std::string getParamValue(std::string key);
            string_list getParamValues(std::string key);
            void addParamValue(std::string key, std::string value);
        private:
            std::map<std::string, string_list> paramValuesByKey;
    };

    QueryParams* parseUrlencodedQuery(std::string query);
}