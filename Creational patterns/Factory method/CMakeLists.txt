cmake_minimum_required(VERSION 3.8)

project(FactoryMethod)

add_library(FactoryMethod 
			"Test.cpp" 
			"Source/Orc.cpp"
			"Source/Skeleton.cpp"
			"Source/SkeletonFactory.cpp"  
			"Source/OrcFactory.cpp")