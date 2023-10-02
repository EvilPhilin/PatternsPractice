#pragma once
#include "Iterator.h"

template<typename T>
class IterableCollection
{
public:
	virtual Iterator<T>* getIterator() = 0;
};