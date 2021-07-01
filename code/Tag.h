/********************************************************************************
> FileName:	Tag.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Wed Jun 30 17:39:32 2021
********************************************************************************/
#ifndef TAG_H
#define TAG_H

#include <memory>
#include <string>
#include <vector>

class Attribute;

class Tag
{
public:
	Tag(const std::string& node_, const std::string& mark);
	~Tag();
public:
	virtual std::string toString();
private:
	std::string node_;
	std::string mark_;
	std::vector<std::shared_ptr<Tag>> children_;
	std::vector<std::shared_ptr<Attribute>> attributes_;
private:
	std::string leftPart();
	std::string middlePart();
	std::string rightPart();
	std::string attributesToString();
	std::string childrenString();
};
#endif//TAG_H
