#include "person.h"

Person::Person(std::string n, int w, int h): name(n), weight(w), height(h)
{
}

Person::~Person()
{
}

std::string Person::get_name() const
{
	return name;
}

int Person::get_weight() const
{
	return weight;
}

int Person::get_height() const
{
	return height;
}
