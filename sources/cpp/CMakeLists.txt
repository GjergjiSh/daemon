# cpp/CMakeLists.txt - Root project configuration
cmake_minimum_required(VERSION 3.10)
project(daemon_project VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories
add_subdirectory(lib)
add_subdirectory(examples)