#include "Headers/Skeleton.h"
#include "Headers/SkeletonFactory.h"
#include "Headers/Orc.h"
#include "Headers/OrcFactory.h"

void doTest()
{
	SkeletonFactory sf;
	Skeleton* s = sf.createEnemy();
	s->beAngry();

	OrcFactory of;
	Orc* o = of.createEnemy();
	o->beAngry();

	delete s;
	delete o;
}