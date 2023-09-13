#include "Person.h"

Person::Person(std::string name, std::string surname):name(name),surname(surname),id(nextId)
{
	nextId++;
}

unsigned int Person::getId()
{
	return id;
}

std::string Person::getName()
{
	return name;
}

std::string Person::getSurname()
{
	return surname;
}
