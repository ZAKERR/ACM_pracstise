cmake_minimum_required(VERSION 3.10)
project(single_queue)

set(CMAKE_CXX_STANDARD 11)

add_executable(single_queue
        flow_windows/main.cpp
        单调队列.cpp)
