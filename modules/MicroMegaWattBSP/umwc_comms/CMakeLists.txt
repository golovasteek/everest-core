cmake_minimum_required(VERSION 3.10)

# set the project name
project(umwc_comms VERSION 0.1)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)


configure_file(config.h.in config.h)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# add the executable
add_library(umwc_comms STATIC)
target_sources(umwc_comms
    PRIVATE
        evSerial.cpp
        protobuf/hi2lo.pb.c
        protobuf/lo2hi.pb.c
)

target_include_directories(umwc_comms
    PUBLIC
        "${PROJECT_BINARY_DIR}"
        protobuf
)

target_link_libraries(umwc_comms
    PUBLIC
        date::date-tz
        everest::nanopb
    PRIVATE
        Pal::Sigslot
        everest::framework
)
