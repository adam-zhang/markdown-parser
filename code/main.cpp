#include <iostream>
#include "CommandLineParser.h"
#include "Translator.h"
#include "Singleton.h"

using namespace std;

int main(int argc, char** argv)
{
	if (!Singleton<CommandLineParser>::instance().parse(argc, argv))
		return -1;
	Singleton<Translator>::instance().translate(Singleton<CommandLineParser>::instance().arguments());
	return 0;
}
