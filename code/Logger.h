#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <sstream>

class Logger
{
private:
	Logger();
	~Logger();
public:
	static void write(const std::string& text);
	template<typename T>
	static void write(const std::string& note, const T& value)
	{
		std::stringstream ss;
		ss << note << ":" << value;		
		write(ss.str());
	}
};
#endif//LOGGER_H
