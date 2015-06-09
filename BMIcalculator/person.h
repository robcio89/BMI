#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person() = delete;
	Person(std::string n, int w, int h);
	~Person();

	std::string get_name() const;
	int get_weight() const;
	int get_height() const;

private:
	std::string name;
	int weight;
	int height;
};

#endif // PERSON_H
