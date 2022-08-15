cmake_minimum_required(VERSION 3.23)
project(GameCpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(GameCpp main.cpp headers/Game.h src/Game.cpp headers/Item.h src/Item.cpp)
