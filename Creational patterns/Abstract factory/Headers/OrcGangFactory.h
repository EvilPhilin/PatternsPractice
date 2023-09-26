#pragma once
#include "GangFactory.h"

class OrcGangFactory : public GangFactory
{
	Archer* createArcher() override;
	Warrior* createWarrior() override;
};