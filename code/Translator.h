#ifndef __TRANSLATOR__H
#define __TRANSLATOR__H

#include <vector>
#include <string>
#include <tuple>
#include <memory>

class HtmlBuilder;

class Translator
{
public:
	Translator(const std::string& fileName);
	~Translator();
public:
	bool translate();
private:
	std::string fileName_;
private:
	std::tuple<bool, std::vector<std::string>> getLines();
	std::shared_ptr<HtmlBuilder> builder_;
};
#endif//__TRANSLATOR__H
