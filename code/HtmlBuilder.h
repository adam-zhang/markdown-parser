/********************************************************************************
> FileName:	HtmlBuilder.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Jun 30 17:37:00 2021
********************************************************************************/
#ifndef HTMLBUILDER_H
#define HTMLBUILDER_H

#include <string>

class HtmlBuilder
{
public:
	HtmlBuilder(const std::string&);
	~HtmlBuilder();
private:
	std::string fileName_;
public:
};
#endif//HTMLBUILDER_H
