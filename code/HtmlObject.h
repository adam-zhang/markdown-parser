#ifndef __HTMLOBJECT__H
#define __HTMLOBJECT__H

#include <vector>
#include <string>
#include <memory>

class HtmlObject
{
public:
	HtmlObject();
	~HtmlObject();
};

class HtmlFile
{
	public:
		HtmlFile();
		~HtmlFile();
	private:
		std::vector<std::shared_ptr<HtmlObject>> objects_;
	public:
		void addHeadLine(int, const std::string&);
		void addItalic(const std::string&);
		void addBold(const std::string&);
		void addLink(const std::string&);
		void addImage(const std::string&);
		void addBlockquote(const std::string&);
		void addUnorderdList(const std::string&);
		void addOrderedList(int, const std::string&);
		void addLine();
		void codeBlock();
};

#endif//__HTMLOBJECT__H
