#ifndef __TRANSLATOR__H
#define __TRANSLATOR__H

#include <vector>
#include <string>

class Translator
{
public:
	Translator();
	~Translator();
public:
	void translate(const std::vector<std::string>& );
};
#endif//__TRANSLATOR__H
