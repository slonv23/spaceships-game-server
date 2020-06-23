#include "ipc-connection.hpp"

class WorldStateDispatcher {
    public:
        WorldStateDispatcher(IpcConnection &_ipcConnection): ipcConnection{_ipcConnection} {};
        void start();
    private:
        IpcConnection &ipcConnection;
};
