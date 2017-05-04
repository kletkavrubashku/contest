cmake_minimum_required(VERSION 3.5)
project(contest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
add_definitions(-DDEBUG)

set(SOURCE_FILES main.cpp)
add_executable(contest ${SOURCE_FILES})