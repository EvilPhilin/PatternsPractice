#pragma once
#include "Iterator.h"
#include "Array.h"

template<typename T>
class ArrayIterator : public Iterator<T>
{
public:
	T getValue() override;
	Iterator<T>* getNext() override;
	bool isEnd() override;
	ArrayIterator(Array<T>&);

private:
	Array<T>& collection;
	int pos;
};