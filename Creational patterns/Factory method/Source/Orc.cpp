#include "../Headers/Orc.h"
#include <iostream>

void Orc::beAngry()
{
	std::cout << "Orc is angry" << std::endl;
}

Orc::Orc()
{
	someData.resize(256);
	std::cout << "Orc was created" << std::endl;
}

Orc::~Orc()
{
	std::cout << "Orc was deleted" << std::endl;
}