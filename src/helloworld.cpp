#include <iostream>
#include <chrono>
//#include <unistd.h>
#include "rtc/rtc.hpp"
#include "served/served.hpp"
#include "spdlog/spdlog.h"

//#include "world-simulator-connector/includes/world-simulator-connector.hpp"
#include "net/includes/signaling-server.hpp"

int main(int argc, char *argv[]) {
   spdlog::set_level(spdlog::level::debug);
   spdlog::flush_every(std::chrono::seconds(3));
   spdlog::info("Starting...");

   //worldSimulatorConnector.start();
   signalingServer.start();

   // rtc::Configuration config;
   // config.
   // std::cout << "Hello World!" << std::endl;
   //pause();

   return 0;
}
