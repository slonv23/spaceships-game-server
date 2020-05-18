#include <sstream>

#include "../includes/converter.hpp"

template <class T> std::string toString(T value) {
    std::ostringstream ostream;
    ostream << value;
    return ostream.str();
}