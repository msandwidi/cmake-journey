# CMake minimum version used to setup project
cmake_minimum_required(VERSION 3.24.0-rc3)

# project command to set project name
# this will set $PROJECT_NAME variable to BASIC0
project(BASIC0)

# Project command to add source files
add_executable(${PROJECT_NAME} main.cpp)
