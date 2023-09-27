#pragma once
#include <string>

class Dog
{
public:
	void coutConfiguration();

	void setLegs(std::string legs)   { this->legs = legs; }
	void setTorso(std::string torso) { this->torso = torso; }
	void setHead(std::string head)   { this->head = head; }

private:
	std::string legs  = "I had no legs =(";
	std::string torso = "I had no torso =(";
	std::string head  = "I had no head =(";
};