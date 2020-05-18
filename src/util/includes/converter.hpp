#include <string>
#include <sstream>

namespace utils {
    template <class T> std::string toString(T value) {
        std::ostringstream ostream;
        ostream << value;
        return ostream.str();
    }
}