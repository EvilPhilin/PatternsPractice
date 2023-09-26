#include "../Headers/SkeletonFactory.h"
#include <iostream>

IEnemy* SkeletonFactory::createEnemy()
{
	return new Skeleton();
}

SkeletonFactory::SkeletonFactory()
{
	std::cout << "SkeletonFactory was created" << std::endl;
}

SkeletonFactory::~SkeletonFactory()
{
	std::cout << "SkeletonFactory was deleted" << std::endl;
}