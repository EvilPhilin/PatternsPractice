#include "Headers/IEnemy.h"
#include "Headers/SkeletonFactory.h"
#include "Headers/OrcFactory.h"
#include "Headers/EnemyFactory.h"

/*
* Client code can create and use Enemies 
* without knowing anything about their implementations
*/
void useFactory(EnemyFactory& ef)
{
	IEnemy* e = ef.createEnemy();
	e->beAngry();
	delete e;
}

void doTest()
{
	OrcFactory* of = new OrcFactory();
	useFactory(*of);
	delete of;

	SkeletonFactory* sf = new SkeletonFactory();
	useFactory(*sf);
	delete sf;
}