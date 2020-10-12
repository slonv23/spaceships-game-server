#pragma once
#include <vector>
#include <cstddef>

#include "io.hpp"

using binary = std::vector<std::byte>;

namespace utils {

    template <class T> T decodeProtobufMessage(binary &message) {
        int decodedBytes;
        int size = utils::decodeUnsignedVarint(reinterpret_cast<const std::uint8_t *>(&message[0]), decodedBytes);

        std::string binaryString(reinterpret_cast<const char *>(&message[decodedBytes]), size);
        T decodedMessage;
        decodedMessage.ParseFromString(binaryString);

        return decodedMessage;
    }

    template <class T> binary serializeProtobufMessageWithSize(T protobufMessage) {
        unsigned long int msgSize = protobufMessage.ByteSizeLong();
        binary message(10 + msgSize); // 10 maximum varint size of timestamp
        int varintSize = utils::writeUnsignedVarint((uint8_t *const) message.data(), msgSize);

        protobufMessage.SerializeWithCachedSizesToArray((unsigned char *) (message.data() + varintSize));
        message.resize(varintSize + msgSize);

        return message;
    }

}