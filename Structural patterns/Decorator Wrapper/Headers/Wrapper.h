#pragma once
#include "UsefulThing.h"

class Wrapper : public UsefulThing
{
public:
	void doJob() override;
	Wrapper(UsefulThing*);

protected:
	UsefulThing* wrappee;
};