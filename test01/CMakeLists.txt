cmake_minimum_required(VERSION 2.9)
project(mytest CXX)

set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

add_library(myexample STATIC myexample.cpp)

enable_testing()
add_executable(mytest01 mytest01.cpp)
target_link_libraries(mytest01 myexample)
add_test(mytest01 mytest01)
