#include "../Header/ArrayIterator.h"

template<typename T>
ArrayIterator<T>::ArrayIterator(Array<T>& coll) : collection(coll), pos(0) {}

template<typename T>
T ArrayIterator<T>::getValue()
{
	return this->collection[this->pos];
}

template<typename T>
Iterator<T>* ArrayIterator<T>::getNext()
{
	this->pos += 1;
	return this;
}

template<typename T>
bool ArrayIterator<T>::isEnd()
{
	return this->pos = this->collection.getSize();
}