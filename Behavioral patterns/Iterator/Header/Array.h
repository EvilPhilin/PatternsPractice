#pragma once
#include "IterableCollection.h"
#include <memory>

template<typename T>
class Array : public IterableCollection<T>
{
public:
	Iterator<T>* getIterator() override;
	size_t getSize();
	Array(int);

private:
	std::shared_ptr<T[]> ptr;
	size_t size;
};
