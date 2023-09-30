#pragma once
#include "Wrapper.h"

class Feature2 : public Wrapper
{
public:
	void doJob() override;
	Feature2(UsefulThing* ut);
};