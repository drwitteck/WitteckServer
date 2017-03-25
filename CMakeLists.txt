cmake_minimum_required(VERSION 3.6)
project(project3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES witteckServer.cpp witteckServer.h)
add_executable(project3 ${SOURCE_FILES} witteckServer.cpp witteckServer.h)