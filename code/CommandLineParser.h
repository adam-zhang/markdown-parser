#ifndef __COMMANDLINEPARSER__H
#define __COMMANDLINEPARSER__H

#include <vector>
#include <string>

class CommandLineParser
{
public:
	CommandLineParser();
	~CommandLineParser();
public:
	static bool parse(const std::vector<std::string>&);
};
#endif//__COMMANDLINEPARSER__H
