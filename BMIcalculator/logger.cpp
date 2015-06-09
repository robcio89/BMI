#include "logger.h"

Logger::Logger(const std::string &l): logger_name(l)
{
}

const std::string Logger::log_info(const std::string& info)
{
	std::string t = QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss").toStdString()
					+ ": [" + logger_name + "]" + info;
	return t;
}

const std::string Logger::log_person_info(const Person& p)
{
	std::string t = QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss").toStdString()
					+ ": [" + logger_name + "] added person: "
					+ p.get_name() + ", height: " + std::to_string( p.get_height());
	return t;
}
