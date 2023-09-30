cmake_minimum_required(VERSION 3.8)

project(Wrapper)

add_library(Wrapper 
			Test.cpp
			Source/ActualImplemetation.cpp
			Source/Wrapper.cpp
			Source/Feature1.cpp
			Source/Feature2.cpp)