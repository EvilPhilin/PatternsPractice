cmake_minimum_required(VERSION 3.8)

project(PatternsPractice)

add_subdirectory("Behavioral patterns/Iterator")

add_executable(LaunchTest main.cpp)

target_link_libraries(LaunchTest Iterator)