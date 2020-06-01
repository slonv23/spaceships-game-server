cmake_minimum_required(VERSION 3.0)

project(spaceships-game-server
        VERSION 0.0.1
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MACOSX_RPATH 1)

# add libdatachannel sources
add_subdirectory(external/libdatachannel)

# add served sources
SET(SERVED_BUILD_TESTS OFF CACHE BOOL "Served - Build unit test suite of served library")
SET(SERVED_BUILD_STATIC ON CACHE BOOL "Served - Build static library")
SET(SERVED_BUILD_EXAMPLES OFF CACHE BOOL "Served - Build examples")
SET(SERVED_BUILD_SHARED OFF CACHE BOOL "Served - Build shared object")
add_subdirectory(external/served)
target_include_directories(served PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/external/served/src)

# add spdlog sources
add_subdirectory(external/spdlog)

# find required protobuf package
find_package(Protobuf REQUIRED)

# find openssl
# find_package(OpenSSL REQUIRED)

# find boost
find_package(Boost 1.53 REQUIRED COMPONENTS system)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

# find all project cpp and hpp files
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.cc")
file(GLOB_RECURSE HEADERS "src/*.hpp" "src/*.h")

# create target
add_executable(server-app ${SOURCES} ${HEADERS})

#set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libstdc++ ${CMAKE_CSS_STANDARD_LIBRARIES}")

target_link_libraries(server-app
                        PRIVATE datachannel-static
                        PRIVATE served
                        PRIVATE spdlog::spdlog
                        PRIVATE ${PROTOBUF_LIBRARY}
                        PRIVATE ${Boost_SYSTEM_LIBRARY}
                        PRIVATE ${Boost_ASIO_LIBRARY}
                        -static-libstdc++)
