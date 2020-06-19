#include <cstdint>

namespace utils {

    unsigned int decodeUnsignedVarint(const std::uint8_t *const data, int &decoded_bytes);

}