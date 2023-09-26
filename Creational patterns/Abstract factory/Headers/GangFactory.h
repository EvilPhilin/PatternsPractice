#pragma once
#include "Archer.h"
#include "Warrior.h"

class GangFactory
{
public:
	virtual Archer* createArcher() = 0;
	virtual Warrior* createWarrior() = 0;
};