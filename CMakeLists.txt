cmake_minimum_required(VERSION 3.22)
project(c_component_pattern C)

set(CMAKE_C_STANDARD 99)

add_executable(c_component_pattern main.c main.h components.h components.c entity.h entity.c)
