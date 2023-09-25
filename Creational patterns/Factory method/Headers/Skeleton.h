#pragma once
#include "IEnemy.h"
#include <vector>

class Skeleton : public IEnemy
{
public:
	void beAngry() override;
	Skeleton();
	~Skeleton();

private:
	std::vector<char> someData;
};