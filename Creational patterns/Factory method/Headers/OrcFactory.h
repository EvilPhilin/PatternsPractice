#pragma once
#include "EnemyFactory.h"
#include "Orc.h"

class OrcFactory : public EnemyFactory
{
public:
	Orc* createEnemy() override;
	OrcFactory();
	~OrcFactory();

};