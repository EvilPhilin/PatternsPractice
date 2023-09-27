#pragma once
#include "DogBuilder.h"

class BlackDogBuilder : public DogBuilder
{
public:
	void setLegs() override;
	void setTorso() override;
	void setHead() override;
	void reset() override;
	Dog* getDog() override;

	BlackDogBuilder();

private:
	Dog* dog;
};