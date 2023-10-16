cmake_minimum_required(VERSION 3.20)
project(M1OEP_Large_idavis1)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(M1OEP_Large_idavis1
        Card.cpp
        Card.h
        Game.cpp
        Game.h
        main.cpp)
