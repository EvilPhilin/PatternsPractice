#include "../Headers/Feature2.h"
#include <iostream>

void Feature2::doJob()
{
	std::cout << "Feature2 worked" << std::endl;
	wrappee->doJob();
}

Feature2::Feature2(UsefulThing* ut) : Wrapper(ut) {}