#pragma once
#include "Dog.h"

class DogBuilder
{
public:
	virtual void setLegs() = 0;
	virtual void setTorso() = 0;
	virtual void setHead() = 0;
	virtual void reset() = 0;
	virtual Dog* getDog() = 0;
};