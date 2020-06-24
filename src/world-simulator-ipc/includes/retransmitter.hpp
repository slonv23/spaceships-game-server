#include "ipc-connection.hpp"
#include "../../net/includes/network-manager.hpp"

class Retransmitter {
    public:
        Retransmitter(IpcConnection &_ipcConnection, NetworkManager &_networkManager):
            ipcConnection{_ipcConnection}, networkManager{_networkManager} {};
        void start();
        void stop();
    private:
        bool running = true;
        IpcConnection &ipcConnection;
        NetworkManager &networkManager;
};
