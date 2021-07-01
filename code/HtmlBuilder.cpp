/********************************************************************************
> FileName:	HtmlBuilder.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Jun 30 17:37:00 2021
********************************************************************************/

#include "HtmlBuilder.h"
#include "FileOperator.h"
#include "Tag.h"

HtmlBuilder::HtmlBuilder(const std::string& fileName)
	: fileName_(fileName + ".html")
{

}

HtmlBuilder::~HtmlBuilder()
{
}

void HtmlBuilder::save()
{
	std::string content = "<html>" + head_->toString() + body_->toString() + "</html>";
	FileOperator::save(fileName_, content);
}
