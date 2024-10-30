# cpp/examples/CMakeLists.txt - Example executable configuration
cmake_minimum_required(VERSION 3.10)

add_executable(daemon_example
    main.cpp
)

target_link_libraries(daemon_example
    PRIVATE
        daemon
)
