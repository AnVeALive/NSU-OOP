cmake_minimum_required(VERSION 3.22)
project(Lab2 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_executable(Lab2 Main.cpp Grid.cpp Grid.h Game.cpp Game.h)