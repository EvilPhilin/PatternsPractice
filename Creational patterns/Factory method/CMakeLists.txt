cmake_minimum_required(VERSION 3.8)

project(FactoryMethod)

add_library(FactoryMethod 
			"Test.cpp" 
			"Headers/EnemyFactory.h"
			"Headers/IEnemy.h"
			"Headers/Orc.h"
			"Headers/Skeleton.h"
			"Headers/SkeletonFactory.h"
			"Headers/OrcFactory.h"
			"Source/Orc.cpp"
			"Source/Skeleton.cpp"
			"Source/SkeletonFactory.cpp"  
			"Source/OrcFactory.cpp")