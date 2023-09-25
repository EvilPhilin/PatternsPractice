#pragma once
#include "IEnemy.h"
#include <vector>

class Orc : public IEnemy
{
public:
	void IEnemy::beAngry() override;
	Orc();
	~Orc();

private:
	std::vector<char> someData;
};