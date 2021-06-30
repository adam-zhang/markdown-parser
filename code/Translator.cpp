#include "Translator.h"
#include "HtmlBuilder.h"
#include <fstream>
#include <iostream>
#include <tuple>

Translator::Translator(const std::string& fileName)
	: fileName_(fileName)
	  , builder_(std::make_shared<HtmlBuilder>(fileName))
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
	return;
}

bool Translator::translate()
{
	auto v = getLines();
	if (!std::get<0>(v))
		return false;
	return false;
}

std::tuple<bool, std::vector<std::string>> Translator::getLines()
{
	std::vector<std::string> v;
	std::ifstream file(fileName_);
	if (!file.good())
	{
		std::cout << fileName_ << " is invalid file name.\n";
		return std::make_tuple(false,v);
	}
	std::string line;
	while(getline(file, line))
		v.emplace_back(line);
	return std::make_tuple(true, v);
}
