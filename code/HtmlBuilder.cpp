#include "HtmlBuilder.h"



std::shared_ptr<HtmlFile> makeHtmlFile()
{
	std::shared_ptr<HtmlFile> file;
	//file->add(makeHead());
	//file->add(makeBody());
	return file;
}

HtmlBuilder::HtmlBuilder()
	: file_(makeHtmlFile())
{
}

HtmlBuilder::~HtmlBuilder()
{
}


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

void HtmlBuilder::add(const std::string& line)
{

}

const std::string HtmlBuilder::toString()
{
	return file_->toString();
}
