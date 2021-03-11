/********************************************************************************
> FileName:	Builder.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Mar 10 17:10:26 2021
********************************************************************************/

#include "Builder.h"
#include "HtmlTag.h"

using namespace std;

Builder::Builder()
{

}

Builder::~Builder()
{
}

std::shared_ptr<HtmlRoot> Builder::makeRoot()
{
	auto root_ = std::make_shared<HtmlRoot>();
	return root_;
}

std::shared_ptr<HtmlRoot> Builder::makeRoot(const std::shared_ptr<HtmlHead>& head, 
		const std::shared_ptr<HtmlBody>& body)
{
	auto root_ = std::make_shared<HtmlRoot>();
	root_->addTag(head);
	root_->addTag(body);
	return root_;
}

std::shared_ptr<HtmlHead> Builder::makeHead(const std::shared_ptr<HtmlTitle>& title)
{
	auto head = make_shared<HtmlHead>();
	head->addTag(title);
	return head;
}

std::shared_ptr<HtmlHead> Builder::makeHead()
{
	return make_shared<HtmlHead>();
}


std::shared_ptr<HtmlTitle> Builder::makeTitle(const std::string& text)
{
	return make_shared<HtmlTitle>(text);
}

std::shared_ptr<HtmlBody> Builder::makeBody()
{
	return make_shared<HtmlBody>();
}

std::shared_ptr<HtmlOrderedHead> Builder::makeOrderedList(const vector<string>& list)
{
	auto head = make_shared<HtmlOrderedHead>();
	for(auto item : list)
		head->addTag(make_shared<HtmlListItem>(item));
	return head;
}

std::shared_ptr<HtmlUnorderedHead> Builder::makeUnorderedList(const std::vector<std::string>& list)
{
	auto head = make_shared<HtmlUnorderedHead>();
	for(auto item : list)
		head->addTag(make_shared<HtmlListItem>(item));
	return head;
}
