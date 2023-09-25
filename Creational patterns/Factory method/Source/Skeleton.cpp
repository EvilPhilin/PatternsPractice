#include "../Headers/Skeleton.h"
#include <iostream>

void Skeleton::beAngry()
{
	std::cout << "Skeleton is angry" << std::endl;
}

Skeleton::Skeleton()
{
	someData.resize(256);
	std::cout << "Skeleton was created" << std::endl;
}

Skeleton::~Skeleton()
{
	std::cout << "Skeleton was deleted" << std::endl;
}