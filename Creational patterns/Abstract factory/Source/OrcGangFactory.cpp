#include "../Headers/OrcGangFactory.h"
#include "../Headers/OrcArcher.h"
#include "../Headers/OrcWarrior.h"

Archer* OrcGangFactory::createArcher()
{
	return new OrcArcher();
}

Warrior* OrcGangFactory::createWarrior()
{
	return new OrcWarrior();
}