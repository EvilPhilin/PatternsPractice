#pragma once
#include "EnemyFactory.h"
#include "Skeleton.h"

class SkeletonFactory : public EnemyFactory
{
public:
	IEnemy* createEnemy() override;
	SkeletonFactory();
	~SkeletonFactory();

};