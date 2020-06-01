#include <ostream>
#include <memory>
#include <ext/stdio_filebuf.h>
#include <google/protobuf/message.h>

class IpcConnection {
    public:
        ~IpcConnection();
        void ipcConnect();
        void writeMsg(google::protobuf::Message &msg);
    private:
        int fileDescriptor;
        std::unique_ptr<__gnu_cxx::stdio_filebuf<char>> filebuf;
        std::unique_ptr<std::ostream> ostream;
        void writeInt(int i);
};
