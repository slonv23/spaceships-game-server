#include <sys/socket.h>
#include <sys/un.h>
#include <cstring>
#include <cerrno>
#include <stdlib.h> /* exit, EXIT_FAILURE */
#include <string>
#include <ext/stdio_filebuf.h>
#include <unistd.h>
#include "spdlog/spdlog.h"

#include "../includes/world-simulator-connector.hpp"
#include "../../proto/helloworld.pb.h"

#define SOCKET_NAME "/tmp/spaceships-world-simulator.sock"

void writeInt(std::ostream &os, int i);

void WorldSimulatorConnector::start() {
    spdlog::info("Connecting to world simulator socket server...");

    int fileDescriptor = socket(AF_UNIX, SOCK_STREAM, 0); // SOCK_DGRAM not work

    struct sockaddr_un address;
    std::memset(&address, 0, sizeof(address));
    address.sun_family = AF_UNIX;
    strncpy(address.sun_path, SOCKET_NAME, sizeof(address.sun_path) - 1);
    if (connect(fileDescriptor, (struct sockaddr*)&address, sizeof(address)) != 0) {
        spdlog::error("Failed to connect to world simulator socket server: {}", std::strerror(errno));
        exit(EXIT_FAILURE);
    }

    std::string testMsg = "Test52";
    helloworld::HelloWorld helloworldMsg;
    helloworld::SubMessage1 *helloworldSubMessage1 = new helloworld::SubMessage1();
    helloworldSubMessage1->set_message(testMsg);
    helloworldMsg.set_allocated_submsg1(helloworldSubMessage1);
    //helloworldMsg.set_message(testMsg);

    __gnu_cxx::stdio_filebuf<char> filebuf(fileDescriptor, std::ios::out);
    std::ostream os(&filebuf);

    int msgSize = static_cast<int>(helloworldMsg.ByteSizeLong());
    spdlog::info("Size of msg: " + std::to_string(msgSize));
    writeInt(os, msgSize);
    helloworldMsg.SerializeToOstream(&os);

    writeInt(os, msgSize);
    helloworldMsg.SerializeToOstream(&os);

    spdlog::info("Connected to world simulator socket server");
}

void writeInt(std::ostream &os, int i) {
    os.write(reinterpret_cast<const char*>(&i), sizeof(i));
}

WorldSimulatorConnector worldSimulatorConnector;