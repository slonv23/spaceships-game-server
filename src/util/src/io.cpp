#include "../includes/io.hpp"

namespace utils {

    unsigned int decodeUnsignedVarint(const std::uint8_t *const data, int &decoded_bytes) {
        int i = 0;
        int decoded_value = 0;
        int shift_amount = 0;

        do {
            decoded_value |= (unsigned int)(data[i] & 0x7F) << shift_amount;     
            shift_amount += 7;
        } while ((data[i++] & 0x80) != 0 );

        decoded_bytes = i;
        return decoded_value;
    }

}