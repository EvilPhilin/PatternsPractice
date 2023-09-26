cmake_minimum_required(VERSION 3.8)

project(AbstractFactory)

add_library(AbstractFactory
			Test.cpp
			Source/OrcArcher.cpp
			Source/OrcGangFactory.cpp
			Source/OrcWarrior.cpp
			Source/SkeletonArcher.cpp
			Source/SkeletonGangFactory.cpp
			Source/SkeletonWarrior.cpp)