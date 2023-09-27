#pragma once
#include "DogBuilder.h"

class WhiteDogBuilder : public DogBuilder
{
public:
	void setLegs() override;
	void setTorso() override;
	void setHead() override;
	void reset() override;
	Dog* getDog() override;

	WhiteDogBuilder();

private:
	Dog* dog;
};