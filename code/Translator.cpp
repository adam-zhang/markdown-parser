#include "Translator.h"
#include "HtmlBuilder.h"
#include "Singleton.h"
#include <fstream>
#include <iostream>

Translator::Translator()
{
}

Translator::~Translator()
{
}

void outputHtml(const std::string& content, const std::string& fileName)
{
	std::ofstream file(fileName);
	if (!file.good())
		return;
	file << content;
}

std::string generateHtmlFileName(const std::string& fileName)
{
	auto pos = fileName.rfind('.');
	std::string s = fileName.substr(0, pos);
	return s + "html";
}

void translate(const std::string& fileName)
{
	std::ifstream file(fileName);
	if (file.bad())
	{
		std::cout << fileName << " is invalid file name.\n";
		return ;
	}
	HtmlBuilder builder;
	std::string line;
	while(getline(file, line))
		builder.add(line);
	std::string content = builder.toString();
	outputHtml(content, generateHtmlFileName(fileName));
}

void Translator::translate(const std::vector<std::string>& arguments)
{
	for(auto argument : arguments)
		::translate(argument);
}
