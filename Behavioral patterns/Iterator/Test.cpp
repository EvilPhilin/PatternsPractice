#include "Header/Array.h"
#include "Header/ArrayIterator.h"
#include <iostream>

// T must have constructor T(int)
void doTest()
{
	IterableCollection<int>* arr = new Array<int>(10);
	Iterator<int>* it = arr->getIterator();
	
	while (!it->isEnd())
	{
		std::cout << it->getValue() << " ";
		it = it->getNext();
	}

	delete arr;
	delete it;
}