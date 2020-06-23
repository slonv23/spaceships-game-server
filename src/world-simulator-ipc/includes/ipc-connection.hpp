#pragma once
#include <ostream>
#include <memory>
#include <ext/stdio_filebuf.h>
#include <google/protobuf/message.h>
#include <mutex>
#include <cstddef>

using binary = std::vector<std::byte>;

class IpcConnection {
    public:
        static const size_t bufferSize = 1300;

        ~IpcConnection();
        void ipcConnect();
        void writeMsg(google::protobuf::Message &msg);
        binary readBinary();
    private:
        int fileDescriptor;
        std::unique_ptr<__gnu_cxx::stdio_filebuf<char>> filebuf;
        std::unique_ptr<std::ostream> ostream;
        mutable std::mutex writeMutex;
        std::byte readBuffer[IpcConnection::bufferSize];

        void writeInt(int i);
};
