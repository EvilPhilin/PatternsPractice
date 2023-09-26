#pragma once
#include "GangFactory.h"

class SkeletonGangFactory : public GangFactory
{
	Archer* createArcher() override;
	Warrior* createWarrior() override;
};