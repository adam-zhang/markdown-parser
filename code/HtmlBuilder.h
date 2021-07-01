/********************************************************************************
> FileName:	HtmlBuilder.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Jun 30 17:37:00 2021
********************************************************************************/
#ifndef HTMLBUILDER_H
#define HTMLBUILDER_H

#include <string>
#include <memory>

class Tag;

class HtmlBuilder
{
public:
	HtmlBuilder(const std::string&);
	~HtmlBuilder();
private:
	std::string fileName_;
	std::shared_ptr<Tag> head_;
	std::shared_ptr<Tag> body_;
public:
	void addHead(const std::shared_ptr<Tag>& head)
	{ head_ = head; }
	void addBody(const std::shared_ptr<Tag>& body)
	{ body_ = body;}
	void save();
};
#endif//HTMLBUILDER_H
