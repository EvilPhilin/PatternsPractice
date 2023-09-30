#pragma once
#include "Wrapper.h"

class Feature1 : public Wrapper
{
public:
	void doJob() override;
	Feature1(UsefulThing* ut);
};