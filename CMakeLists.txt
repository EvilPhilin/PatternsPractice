cmake_minimum_required(VERSION 3.8)

project(PatternsPractice)

add_subdirectory("Structural patterns/Decorator Wrapper")

add_executable(LaunchTest main.cpp)

target_link_libraries(LaunchTest Wrapper)