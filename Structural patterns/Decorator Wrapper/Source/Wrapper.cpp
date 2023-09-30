#include "../Headers/Wrapper.h"
#include <iostream>

void Wrapper::doJob()
{
	std::cout << "Base wrapper worked" << std::endl;
	wrappee->doJob();
}

Wrapper::Wrapper(UsefulThing* ut) : wrappee(ut) {}