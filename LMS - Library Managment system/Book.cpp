#include "Book.h"

Book::Book(std::string title) :title(title), available(true)
{
	id = nextId;
	nextId++;
}

std::string Book::getTitle()
{
	return std::string();
}

bool Book::isAvailable()
{
	return available;
}
