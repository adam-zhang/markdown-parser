#include "CommandLineParser.h"
#include <fstream>

using namespace std;

CommandLineParser::CommandLineParser()
{
}

CommandLineParser::~CommandLineParser()
{
}

static bool parse(const string& fileName);

bool CommandLineParser::parse(const vector<string>& arguments)
{
	for(auto argument : arguments)
		if (!parse(argument))
			return false;
	return true;
}

bool parse(const string& fileName)
{

}
