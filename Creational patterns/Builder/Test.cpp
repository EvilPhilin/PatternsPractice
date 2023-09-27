#include "Headers/Dog.h"
#include "Headers/DogBuilder.h"
#include "Headers/BlackDogBuilder.h"
#include "Headers/WhiteDogBuilder.h"

/*
* In this kind of perverted example I can create dogs 
* without giving them some "unnecessary" parts.
* Different builders produce different types of parts
* and client decides which one should be included
*/

Dog* doPartitionalBuilding(DogBuilder& db)
{
	db.reset();
	db.setLegs();
	db.setHead();

	return db.getDog();
}

void doTest()
{
	DogBuilder* db = new BlackDogBuilder();
	Dog* d = doPartitionalBuilding(*db);
	d->coutConfiguration();

	delete db;
	delete d;

	db = new WhiteDogBuilder();
	d = doPartitionalBuilding(*db);
	d->coutConfiguration();

	delete db;
	delete d;
}