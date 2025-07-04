cmake_minimum_required(VERSION 3.10)
project(PingMACUtility)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(PingMACUtility
    source/main.cpp
    source/PingUtility.cpp
)

include_directories(${CMAKE_SOURCE_DIR})
