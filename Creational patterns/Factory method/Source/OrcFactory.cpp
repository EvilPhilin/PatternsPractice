#include "../Headers/OrcFactory.h"
#include <iostream>

Orc* OrcFactory::createEnemy()
{
	return new Orc();
}

OrcFactory::OrcFactory()
{
	std::cout << "OrcFactory was created" << std::endl;
}

OrcFactory::~OrcFactory()
{
	std::cout << "OrcFactory was deleted" << std::endl;
}