cmake_minimum_required(VERSION 3.23)
project(Leetee)

set(CMAKE_CXX_STANDARD 14)
include_directories(inc)
file(GLOB myAppSource app/*.cpp)
add_executable(
    Leetee main.cpp src/CSolution.cpp inc/CSolution.h src/CRuntime.cpp inc/CRuntime.h src/CStruct.cpp inc/CStruct.h 
    ${myAppSource}
    )
