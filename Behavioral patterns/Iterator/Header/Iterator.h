#pragma once

template<typename T>
class Iterator
{
public:
	virtual T getValue() = 0;
	virtual Iterator<T>* getNext() = 0;
	virtual bool isEnd() = 0;
};