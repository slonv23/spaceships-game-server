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

    int writeUnsignedVarint(std::ostream *ostream, uint64_t value) {
        int encoded = 0;

        do {
            uint8_t next_byte = value & 0x7F;
            value >>= 7;

            if (value) {
                next_byte |= 0x80;
            }

            encoded++;
            ostream->write(reinterpret_cast<const char*>(&next_byte), sizeof(next_byte));
        } while (value);

        return encoded;
    }


    int writeUnsignedVarint(uint8_t *const buffer, uint64_t value) {
        int encoded = 0;

        do {
            uint8_t next_byte = value & 0x7F;
            value >>= 7;

            if (value) {
                next_byte |= 0x80;
            }

            buffer[encoded++] = next_byte;
        } while (value);

        return encoded;
    }

}