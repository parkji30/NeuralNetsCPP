cmake_minimum_required(VERSION 3.10)

project(MatrixCPP)

find_package(Eigen3 CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 20) # Use c++20 standard

add_executable(matrixcpp main.cpp)

target_link_libraries(matrixcpp PRIVATE Eigen3::Eigen)