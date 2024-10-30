cmake_minimum_required(VERSION 3.10)

add_library(daemon
    src/daemon.cpp
)

target_include_directories(daemon
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

