/********************************************************************************
> FileName:	HtmlTag.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Mar 10 17:16:39 2021
********************************************************************************/

#include "HtmlTag.h"
#include <sstream>
#include <cassert>

using namespace std;

HtmlTag::HtmlTag()
{
}

HtmlTag::~HtmlTag()
{
}

//std::string recursive(const string& tag, const vector<HtmlTag>& tags, const string& value)
//{
//	stringstream ss;
//	ss << "<" << tag << ">" << value;
//	for(auto t : tags)
//		ss << t->toString();
//	ss << "</" << tag << ">";
//	return ss.str();
//}


//std::string recursive(const string& tag, const vector<HtmlTag>& tags)
//{
//	stringstream ss;
//	ss << "<" << tag << ">";
//	for(auto t : tags)
//		ss << t->toString();
//	ss << "</" << tag << ">";
//	return ss.str();
//}

std::string HtmlRoot::toString()
{
	//return recursive("html", this->tags());
	stringstream ss;
	ss << "<html>";
	for(auto tag : this->tags())
		ss << tag->toString();
	ss << "</html>";
	return ss.str();
}

std::string HtmlTitle::toString()
{
	stringstream ss;
	ss << "<title>" << title_ << "</title>";
	return ss.str();
}

std::string HtmlHead::toString()
{
	stringstream ss;
	ss << "<head>";
	for(auto tag : tags())
		ss << tag->toString();
	ss << "</head>";
	return ss.str();
}

std::string HtmlBody::toString()
{
	stringstream ss;
	ss << "<body>";
	for(auto tag : tags())
		ss << tag->toString();
	ss << "</body>";
	return ss.str();
}

std::string HtmlHeader::toString()
{
	stringstream ss;
	ss << "<h" << tag_ << ">" << text_ << "</h" << tag_ << ">";
	return ss.str();
}

std::string HtmlUnorderedHead::toString()
{
	stringstream ss;
	ss << "<ul>";
	for(auto tag : tags())
		ss << tag->toString();
	ss << "</ul>";
	return ss.str();
}

std::string HtmlListItem::toString()
{
	stringstream ss;
	ss << "<li>" << text_ << "</li>";
	return ss.str();
}

std::string HtmlOrderedHead::toString()
{
	stringstream ss;
	ss << "<ol>";
	for(auto tag : tags())
       		ss << tag->toString();
	ss << "</ol>";
	return ss.str();
}

std::string HtmlImage::toString()
{
	stringstream ss;
	ss << "<img src" << url_ << " alt=" << alternative_ << "/>";
	return ss.str();
}

std::string HtmlLink::toString()
{
	stringstream ss;
	ss << "<a href=\"" << url_ << "\">" << value_ << "</a>";
	return ss.str();
}

std::string HtmlBold::toString()
{
	stringstream ss;
	ss << "<strong>" << text_ << "</strong>";
	return ss.str();
}

std::string HtmlItallic::toString()
{
	stringstream ss;
	ss << "<i>" << text_ << "</i>";
	return ss.str();
}

std::string HtmlDeletion::toString()
{
	stringstream ss;
	ss << "<strike>" << text_ << "</strike>";
	return ss.str();
}

std::string HtmlReference::toString()
{
	stringstream ss;
	ss << "<blockquote>" << text_ << "</blockquote>";
	return ss.str();
}

std::string getAlign(Align align)
{
	switch(align)
	{
		case AlignCenter:
			return "center";
		case AlignLeft:
			return "left";
		case AlignRight:
			return "right";
	}
	assert(false);
	return "";
}

std::string HtmlCell::toString()
{
	stringstream ss;
	ss << "<td align=\"" << getAlign(align_) << "\"" << text_ << "</td>";
	return ss.str();
}

std::string HtmlRow::toString()
{
	stringstream ss;
	ss << "<tr>";
	for(auto tag : tags())
		ss << tag->toString();
	ss << "</tr>";
	return ss.str();
}

std::string HtmlTableHeader::toString()
{
	stringstream ss;
	ss << "<th>" << text_ << "</th>";
	return ss.str();
}


std::string HtmlTable::toString()
{
	stringstream ss;
	ss << "<table align=\"center\" border=\"1\">";
	for(auto tag : tags())
		ss << tag->toString();
	ss << "</table>";
	return ss.str();
}
