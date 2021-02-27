#include "CommandLineParser.h"
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
	vector<string> v;
	for(int i = 0; i != argc; ++i)
		v.push_back(argv[i]);
	return true;
}
