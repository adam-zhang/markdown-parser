/********************************************************************************
> FileName:	Builder.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Mar 10 17:10:26 2021
********************************************************************************/
#ifndef __BUILDER__H
#define __BUILDER__H

#include <string>
#include <memory>
#include <vector>

class HtmlRoot;
class HtmlHead;
class HtmlTitle;
class HtmlBody;
class HtmlUnorderedHead;
class HtmlOrderedHead;
class HtmlHeader;

class Builder
{
public:
	Builder();
	~Builder();
public:
	std::shared_ptr<HtmlRoot> makeRoot();
	std::shared_ptr<HtmlRoot> makeRoot(const std::shared_ptr<HtmlHead>&, const std::shared_ptr<HtmlBody>&);
	std::shared_ptr<HtmlHead> makeHead();
	std::shared_ptr<HtmlHead> makeHead(const std::shared_ptr<HtmlTitle>& );
	std::shared_ptr<HtmlTitle> makeTitle(const std::string&);
	std::shared_ptr<HtmlBody> makeBody();
	std::shared_ptr<HtmlHeader> makeHeader(int, std::string&);
	std::shared_ptr<HtmlUnorderedHead> makeUnorderedList(const std::vector<std::string>& list);
	std::shared_ptr<HtmlOrderedHead> makeOrderedList(const std::vector<std::string>& list);
};
#endif//__BUILDER__H
