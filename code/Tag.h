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

class Attriubute;

class Tag
{
public:
	Tag(const std::string& node_, const std::string& mark);
	~Tag();
public:
	virtual std::string toString() {return std::string();}
private:
	std::string node_;
	std::string mark_;
	std::vector<std::shared_ptr<Tag>> children_;
	std::vector<std::shared_ptr<Attriubute>> attributes_;
};
#endif//TAG_H
