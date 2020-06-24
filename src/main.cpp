#include <iostream>
#include <chrono>
#include <boost/asio.hpp>
#include <unistd.h> /* sleep */
#include <signal.h>
#include <thread>
#include <exception>
#include "rtc/rtc.hpp"
#include "served/served.hpp"
#include "spdlog/spdlog.h"

//#include "world-simulator-connector/includes/world-simulator-connector.hpp"
#include "net/includes/network-manager.hpp"
#include "net/includes/signaling-server.hpp"
#include "world-simulator-ipc/includes/ipc-connection.hpp"
#include "world-simulator-ipc/includes/retransmitter.hpp"
#include "proto/helloworld.pb.h"

helloworld::HelloWorld createTestMsg() {
   std::string testMsg = "Test message";
   helloworld::HelloWorld helloworldMsg;
   helloworld::SubMessage1 *helloworldSubMessage1 = new helloworld::SubMessage1();
   helloworldSubMessage1->set_message(testMsg);
   helloworldMsg.set_allocated_submsg1(helloworldSubMessage1);

   return helloworldMsg;
}

int main(int argc, char *argv[]) {
   IpcConnection worldSimulatorIpcConnection;
   NetworkManager networkManager(worldSimulatorIpcConnection);
   SignalingServer signalingServer(networkManager);
   Retransmitter retransmitter(worldSimulatorIpcConnection, networkManager);

   spdlog::set_level(spdlog::level::debug);
   //spdlog::flush_every(std::chrono::seconds(3));
   spdlog::info("Starting...");

   //worldSimulatorConnector.start();
   signalingServer.start();
   worldSimulatorIpcConnection.ipcConnect();

   std::thread retransmitterThread(&Retransmitter::start, &retransmitter);

   //helloworld::HelloWorld msg = createTestMsg();
   //worldSimulatorIpcConnection.writeMsg(msg);
   //sleep(2);
   //worldSimulatorIpcConnection.writeMsg(msg);

   spdlog::info("Started");

   boost::asio::io_service ioService;
   boost::asio::signal_set signals(ioService);

   signals.add(SIGINT);
	signals.add(SIGTERM);
   #if defined(SIGQUIT)
	signals.add(SIGQUIT);
   #endif

   signals.async_wait(
		[](boost::system::error_code /*ec*/, int /*signo*/) {
			/* The server is stopped by cancelling all outstanding asynchronous
			 * operations. Once all operations have finished the io_service::run()
			 * call will exit.
			 */
			spdlog::info("Stopping...");
		});

   ioService.run();

   retransmitter.stop();
   retransmitterThread.join();

   return 0;
}
