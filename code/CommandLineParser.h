#ifndef __COMMANDLINEPARSER__H
#define __COMMANDLINEPARSER__H

#include <vector>
#include <string>

class CommandLineParser
{
public:
	CommandLineParser();
	~CommandLineParser();
private:
	std::vector<std::string> arguments_;
public:
	bool parse(int argc, char** argv);
	std::vector<std::string> arguments()
	{ return arguments_; }
};
#endif//__COMMANDLINEPARSER__H
