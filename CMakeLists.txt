cmake_minimum_required(VERSION 3.0)

project(spaceships-game-server
        VERSION 0.0.1
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MACOSX_RPATH 1)

add_subdirectory(external/libdatachannel)

SET(SERVED_BUILD_TESTS OFF CACHE BOOL "Served - Build unit test suite of served library")
SET(SERVED_BUILD_STATIC ON CACHE BOOL "Served - Build static library")
SET(SERVED_BUILD_EXAMPLES OFF CACHE BOOL "Served - Build examples")
SET(SERVED_BUILD_SHARED OFF CACHE BOOL "Served - Build shared object")
add_subdirectory(external/served)

file(GLOB SOURCES "src/*.cpp")
 
add_executable(hello ${SOURCES})

target_link_libraries(hello datachannel-static)
target_link_libraries(hello served)
