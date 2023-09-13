#pragma once
#include <string>
#include <iostream>

class Book
{
	std::string title;
	bool available;
	static unsigned int nextId;
	unsigned int id;
public:
	Book(std::string);
	std::string getTitle();
	bool isAvailable();
};

