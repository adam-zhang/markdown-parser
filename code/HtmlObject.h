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
	private:
		std::vector<std::shared_ptr<HtmlObject>> objects_;
		std::string text_;
	public:
		void add(const std::shared_ptr<HtmlObject>& obj)
		{
			objects_.push_back(obj);
		}

		virtual std::string toString();
};

class HtmlFile : public HtmlObject
{
	public:
		HtmlFile();
		~HtmlFile();
	public:
		
};

#endif//__HTMLOBJECT__H
