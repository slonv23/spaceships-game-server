#include <sys/socket.h>
#include <sys/un.h>
#include <cstring>
#include <cerrno>
#include <string>
#include <unistd.h>
#include <exception>
#include <stdexcept>
#include "spdlog/spdlog.h"

#include "../includes/ipc-connection.hpp"
#include "../../util/includes/io.hpp"

#define SOCKET_NAME "/tmp/spaceships-world-simulator.sock"

IpcConnection::~IpcConnection() {
    spdlog::debug("IpcConnection: Closing socket...");
    close(this->fileDescriptor);
    spdlog::debug("IpcConnection: Socket closed");
}

void IpcConnection::writeMsg(google::protobuf::Message &msg) {
    unsigned int msgSize = static_cast<int>(msg.ByteSizeLong());
    //this->writeInt(msgSize);
    utils::writeUnsignedVarint(this->ostream.get(), msgSize);
    msg.SerializeToOstream(this->ostream.get());

    this->ostream->flush();
}

void IpcConnection::writeInt(int i) {
    this->ostream->write(reinterpret_cast<const char*>(&i), sizeof(i));
}

void IpcConnection::ipcConnect() {
    spdlog::debug("IpcConnection: Connecting to world simulator socket server...");

    this->fileDescriptor = socket(AF_UNIX, SOCK_STREAM, 0); // SOCK_DGRAM not work

    struct sockaddr_un address;
    std::memset(&address, 0, sizeof(address));
    address.sun_family = AF_UNIX;
    strncpy(address.sun_path, SOCKET_NAME, sizeof(address.sun_path) - 1);
    if (connect(this->fileDescriptor, (struct sockaddr*)&address, sizeof(address)) != 0) {
        spdlog::error("IpcConnection: Failed to connect to world simulator socket server: {}", std::strerror(errno));
        throw std::runtime_error("IPC connection failure");
    }

    this->filebuf = std::make_unique<__gnu_cxx::stdio_filebuf<char>>(this->fileDescriptor, std::ios::out);
    this->ostream = std::make_unique<std::ostream>(this->filebuf.get());

    spdlog::debug("IpcConnection: Connected to world simulator socket server");
}
