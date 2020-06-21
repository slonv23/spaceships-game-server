#include <cstdint>
#include <ostream>

namespace utils {

    /** @see https://stackoverflow.com/questions/19758270/read-varint-from-linux-sockets */
    unsigned int decodeUnsignedVarint(const std::uint8_t *const data, int &decoded_bytes);

    /** @see https://stackoverflow.com/questions/19758270/read-varint-from-linux-sockets */
    int writeUnsignedVarint(std::ostream *ostream, uint64_t value);

}