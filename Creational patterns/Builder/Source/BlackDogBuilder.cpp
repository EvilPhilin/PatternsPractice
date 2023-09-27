#include "../Headers/BlackDogBuilder.h"

void BlackDogBuilder::setLegs()
{
	dog->setLegs("Black legs");
}

void BlackDogBuilder::setTorso()
{
	dog->setTorso("Black torso");
}

void BlackDogBuilder::setHead()
{
	dog->setHead("Black head");
}

void BlackDogBuilder::reset()
{
	delete dog;
	this->dog = new Dog();
}

Dog* BlackDogBuilder::getDog()
{
	Dog* res = this->dog;
	this->dog = new Dog();
	return res;
}

BlackDogBuilder::BlackDogBuilder()
{
	this->dog = new Dog();
}