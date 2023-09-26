#include "../Headers/OrcFactory.h"
#include <iostream>

IEnemy* OrcFactory::createEnemy()
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