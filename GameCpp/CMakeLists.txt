cmake_minimum_required(VERSION 3.23)
project(NewCpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(NewCpp main.cpp headers/Game.h src/Game.cpp headers/Item.h src/Item.cpp)
