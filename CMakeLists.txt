cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11")

project(runner)

add_executable(
 runner
 runner.cpp
 ran.cpp
 grab.cpp
 add.cpp
)
