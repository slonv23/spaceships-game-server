#include "spdlog/spdlog.h"

#include "../includes/retransmitter.hpp"
#include "../../proto/response-root.pb.h"
#include "../../util/includes/io.hpp"

void Retransmitter::start() {
    auto message = this->ipcConnection.readBinary();

    int decodedBytes;
    int size = utils::decodeUnsignedVarint(reinterpret_cast<const std::uint8_t *>(&message[0]), decodedBytes);
    spdlog::info("Received message from world-simulator-app with size: {}", size);

    try {
        std::string binaryString(reinterpret_cast<const char *>(&message[decodedBytes]), size);
        multiplayer::ResponseRoot responseRoot;
        responseRoot.ParseFromString(binaryString);

        int requestId = responseRoot.requestid();
        if (requestId != 0) {
            // retransmit message to specific client
            this->networkManager.completeRequest(requestId, message);
        } else {
            // broadcast message
            this->networkManager.broadcast(message);
        }
    } catch (const std::exception &e) {
        spdlog::error("Failed to process world-simulator-app message, error: {}", e.what());
    }
}