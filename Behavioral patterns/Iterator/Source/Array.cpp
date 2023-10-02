#include "../Header/Array.h"
#include "../Header/ArrayIterator.h"
#include <random>

template<typename T>
Array<T>::Array(int n)
{
	this->ptr = std::make_shared<T[]>(n);
	for (int i = 0; i < n; i++)
		this->ptr[i] = T(std::rand() / n);

	this->size = n;
}

template<typename T>
size_t Array<T>::getSize()
{
	return this->size;
}

template<typename T>
Iterator<T>* Array<T>::getIterator()
{
	return ArrayIterator<T>(*this);
}