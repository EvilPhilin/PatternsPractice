#include "Headers/ActualImplementation.h"
#include "Headers/Feature1.h"
#include "Headers/Feature2.h"
#include <iostream>

/* TODO:
*  implement destructor for wrappers 
*/

void doTest()
{
	UsefulThing* ut = new ActualImplementation();
	ut->doJob();
	std::cout << std::endl;

	ut = new Wrapper(ut); // Unnecessary to use base wrapper if it doesnt implement any features
	ut->doJob();
	std::cout << std::endl;

	ut = new Feature1(ut);
	ut = new Feature2(ut);
	ut->doJob();
}