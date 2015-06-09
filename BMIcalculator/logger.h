#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <QDateTime>
#include "person.h"

class Logger
{
public:
	Logger(const std::string& l);

	const std::string log_info(const std::string& info);

	const std::string log_person_info(const Person& p);


private:
	std::string logger_name;
};

#endif // LOGGER_H
