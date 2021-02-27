#ifndef __HTMLBUILDER__H
#define __HTMLBUILDER__H

#include <string>
#include <memory>
#include "HtmlObject.h"

class HtmlBuilder
{
	public:
		HtmlBuilder();
		~HtmlBuilder();
	private:
		std::shared_ptr<HtmlFile> file_;
	public:
		void add(const std::string& line);
		const std::string toString();
};
#endif//__HTMLBUILDER__H
