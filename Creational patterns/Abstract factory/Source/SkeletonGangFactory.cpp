#include "../Headers/SkeletonGangFactory.h"
#include "../Headers/SkeletonArcher.h"
#include "../Headers/SkeletonWarrior.h"

Archer* SkeletonGangFactory::createArcher()
{
	return new SkeletonArcher();
}

Warrior* SkeletonGangFactory::createWarrior()
{
	return new SkeletonWarrior();
}