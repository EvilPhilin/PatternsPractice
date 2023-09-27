#include "../Headers/WhiteDogBuilder.h"

void WhiteDogBuilder::setLegs()
{
	dog->setLegs("White legs");
}

void WhiteDogBuilder::setTorso()
{
	dog->setTorso("White torso");
}

void WhiteDogBuilder::setHead()
{
	dog->setHead("White head");
}

void WhiteDogBuilder::reset()
{
	delete dog;
	this->dog = new Dog();
}

Dog* WhiteDogBuilder::getDog()
{
	Dog* res = this->dog;
	this->dog = new Dog();
	return res;
}

WhiteDogBuilder::WhiteDogBuilder()
{
	this->dog = new Dog();
}