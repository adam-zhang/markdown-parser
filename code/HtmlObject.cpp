#include "HtmlObject.h"
#include <fstream>
#include <sstream>

using namespace std;

HtmlObject::HtmlObject()
{
}

HtmlObject::~HtmlObject()
{
}

string HtmlObject::toString()
{
	stringstream ss;
	for(auto obj : objects_)
		ss << obj->toString();
	return ss.str();
}

HtmlFile::HtmlFile()
{
	std::stringstream ss;
	ss << "<!DOCTYPE html>"
		"<html>";
}

HtmlFile::~HtmlFile()
{
	stringstream ss;
	ss << "</html>";
}
