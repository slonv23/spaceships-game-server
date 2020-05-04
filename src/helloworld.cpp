#include <iostream>
//#include <unistd.h>
#include "rtc/rtc.hpp"
#include "served/served.hpp"
#include "spdlog/spdlog.h"

#include "world-simulator-connector/includes/world-simulator-connector.hpp"
#include "signaling-server/includes/signaling-server.hpp"

int main(int argc, char *argv[]) {
   spdlog::info("Starting...");

   worldSimulatorConnector.start();
   // signalingServer.start();

   // rtc::Configuration config;
   // config.
   // std::cout << "Hello World!" << std::endl;
   //pause();

   return 0;
}
