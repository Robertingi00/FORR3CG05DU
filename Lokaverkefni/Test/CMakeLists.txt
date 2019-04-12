cmake_minimum_required(VERSION 3.13)
project(Test)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost)

set(SOURCE_FILES firstTest.cpp)

add_executable(Test ${SOURCE_FILES})