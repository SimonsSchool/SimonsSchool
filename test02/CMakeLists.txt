cmake_minimum_required(VERSION 2.8)
project(myexample CXX)

set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

add_library(${PROJECT_NAME} STATIC myexample.cpp)

find_package(MPI)
add_definitions(${MPI_CXX_COMPILE_FLAGS}  ${MPI_C_COMPILE_FLAGS})
target_link_libraries(${PROJECT_NAME} PUBLIC ${MPI_CXX_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${MPI_CXX_INCLUDE_PATH})

find_package(ALPSCore)
find_package(TRIQS)

enable_testing()
add_executable(mytest01 mytest01.cpp)
target_link_libraries(mytest01 ${PROJECT_NAME})
add_test(mytest01 mytest01)
