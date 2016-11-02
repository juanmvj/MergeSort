cmake_minimum_required(VERSION 2.8.9)
project(merge)

include_directories(include)

set(SOURCES src/merge.cpp src/main.cpp)

add_executable(merge ${SOURCES})
