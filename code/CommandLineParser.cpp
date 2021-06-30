#include "CommandLineParser.h"
#include "Logger.h"
#include <fstream>
#include <iostream>

using namespace std;

CommandLineParser::CommandLineParser()
{
}

CommandLineParser::~CommandLineParser()
{
}


static void outputHelp(const std::string& command)
{
	cout << "the usage:\n"
		"\t" + command + " <markdown file> ...\n";
}

bool CommandLineParser::parse(int argc, char** argv)
{
	if (argc == 1)
	{
		outputHelp(argv[0]);
		return false;
	}
	for(int i = 1; i != argc; ++i)
		arguments_.push_back(argv[i]);
	return true;
}
