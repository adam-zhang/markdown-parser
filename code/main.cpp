#include <iostream>
#include "CommandLineParser.h"
#include "Translator.h"
#include "Singleton.h"
#include "Logger.h"

using namespace std;

int main(int argc, char** argv)
{
	CommandLineParser parser;
	if (!parser.parse(argc, argv))
		return -1;
	auto fileNames = parser.arguments();
	for(auto file : fileNames)	
	{
		Translator translator(file);
	}
	return 0;
}
