#include "../Headers/Feature1.h"
#include <iostream>

void Feature1::doJob()
{
	std::cout << "Feature1 worked" << std::endl;
	wrappee->doJob();
}

Feature1::Feature1(UsefulThing* ut) : Wrapper(ut) {}