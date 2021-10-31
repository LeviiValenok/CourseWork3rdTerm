cmake_minimum_required(VERSION 3.19)
project(bomberman)

set(CMAKE_CXX_STANDARD 14)

add_executable(bomberman main.cpp
        Player.cpp
        Player.h
        Enemies.h
        Enemies.cpp
        Bomb.cpp
        Bomb.h
        Map.cpp Map.h
        )