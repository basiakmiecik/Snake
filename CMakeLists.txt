cmake_minimum_required(VERSION 3.13)
project(Snake)

set(CMAKE_CXX_STANDARD 17)

add_executable(Snake main.cpp GameField.cpp GameField.h Snake.cpp Snake.h Play.cpp Play.h)