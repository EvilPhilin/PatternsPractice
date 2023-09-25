#pragma once
#include "IEnemy.h"
#include <memory>

class EnemyFactory
{
public:
	virtual IEnemy* createEnemy() = 0;
};