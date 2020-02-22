cmake_minimum_required(VERSION 3.0)

project(spaceships-game-server
        VERSION 0.0.1
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MACOSX_RPATH 1)

add_subdirectory(external/libdatachannel)

file(GLOB SOURCES "src/*.cpp")
 
add_executable(hello ${SOURCES})

target_link_libraries(hello datachannel)
