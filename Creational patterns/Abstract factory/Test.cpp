#include "Headers/GangFactory.h"
#include "Headers/SkeletonGangFactory.h"
#include "Headers/OrcGangFactory.h"
#include "Headers/Archer.h"
#include "Headers/Warrior.h"

/*
* Client code can create and use Warriors and Archers
* without knowing anything about their implementations
*/ 
void useFactory(GangFactory& gf)
{
	Warrior* w = gf.createWarrior();
	Archer* a = gf.createArcher();

	w->swingSword();
	a->doArchery();

	delete w;
	delete a;
}

void doTest()
{
	OrcGangFactory* ogf = new OrcGangFactory();
	useFactory(*ogf);

	SkeletonGangFactory* sgf = new SkeletonGangFactory();
	useFactory(*sgf);

	delete ogf;
	delete sgf;
}