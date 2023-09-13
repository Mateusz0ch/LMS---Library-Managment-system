#pragma once
#include <string>
class Person
{
	static unsigned int nextId;
	unsigned int id;
	std::string name;
	std::string surname;
public:
	Person(std::string, std::string);
	unsigned int getId();
	std::string getName();
	std::string getSurname();
};

