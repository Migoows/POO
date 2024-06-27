cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Clock.h
        DigitalClock.cpp
        DigitalClock.h
        Logger.cpp
        Logger.h)
