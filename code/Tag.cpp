/********************************************************************************
> FileName:	Tag.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Jun 30 17:39:32 2021
********************************************************************************/

#include "Tag.h"
#include "Attribute.h"
#include <sstream>

Tag::Tag(const std::string& node, const std::string& mark)
	: node_(node)
	  , mark_(mark)
{
}

Tag::~Tag()
{
}

std::string Tag::toString()
{
	std::stringstream ss;
	ss << leftPart() << middlePart() << rightPart();
	return ss.str();
}

std::string Tag::leftPart()
{
	std::stringstream ss;
	ss << "<" << node_ << " " << attributesToString() << ">";
	return ss.str();
}

std::string Tag::attributesToString()
{
	std::stringstream ss;
	for(auto item : attributes_)
		ss << item->toString() << " ";
	return ss.str();
}

std::string Tag::middlePart()
{
	std::stringstream ss;
	ss << mark_ << childrenString();
	return ss.str();
}

std::string Tag::rightPart()
{
	return "</" + node_ + ">";
}

std::string Tag::childrenString()
{
	std::stringstream ss;
	for(auto item : children_)
		ss << item->toString();
	return ss.str();
}

