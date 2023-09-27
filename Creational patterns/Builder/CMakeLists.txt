cmake_minimum_required(VERSION 3.8)

project(Builder)

add_library(Builder 
			Test.cpp
			Source/Dog.cpp
			Source/BlackDogBuilder.cpp
			Source/WhiteDogBuilder.cpp)