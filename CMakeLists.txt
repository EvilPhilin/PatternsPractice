cmake_minimum_required(VERSION 3.8)

project(PatternsPractice)

add_subdirectory("Creational patterns/Builder")

add_executable(LaunchTest main.cpp)

target_link_libraries(LaunchTest Builder)