#pragma once
#include "EnemyFactory.h"
#include "Orc.h"

class OrcFactory : public EnemyFactory
{
public:
	IEnemy* createEnemy() override;
	OrcFactory();
	~OrcFactory();

};