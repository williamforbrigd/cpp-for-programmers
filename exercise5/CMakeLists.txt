cmake_minimum_required(VERSION 3.1)

project(exercise5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(chess chess.cpp)
add_executable(chess2_anonym_func chess2_anonym_func.cpp)

