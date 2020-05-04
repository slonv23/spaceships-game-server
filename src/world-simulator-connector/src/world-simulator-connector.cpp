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
    helloworldMsg.set_message(testMsg);

    __gnu_cxx::stdio_filebuf<char> filebuf(fileDescriptor, std::ios::out);
    std::ostream os(&filebuf);

    helloworldMsg.SerializeToOstream(&os);
    std::endl(os);

    //fsync(fileDescriptor);

    helloworldMsg.SerializeToOstream(&os);
    std::endl(os);

    //sleep(5);

    // msg.SerializeToOstream(&serialized);
    send(fileDescriptor, testMsg.c_str(), testMsg.size(), 0);

    //fsync(fileDescriptor);

    send(fileDescriptor, testMsg.c_str(), testMsg.size(), 0);

    spdlog::info("Connected to world simulator socket server");
}

WorldSimulatorConnector worldSimulatorConnector;