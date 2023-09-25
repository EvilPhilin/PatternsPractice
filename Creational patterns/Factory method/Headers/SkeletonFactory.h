#pragma once
#include "EnemyFactory.h"
#include "Skeleton.h"

class SkeletonFactory : public EnemyFactory
{
public:
	Skeleton* createEnemy() override;
	SkeletonFactory();
	~SkeletonFactory();

};