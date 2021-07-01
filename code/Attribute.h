/********************************************************************************
> FileName:	Attribute.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Thu Jul 01 09:01:13 2021
********************************************************************************/
#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <string>

class Attribute
{
public:
	Attribute();
	~Attribute();
public:
	std::string key()
	{ return key_;}
	std::string value()
	{ return value_; }
private:
	std::string key_;
	std::string value_;
public:
	std::string toString();
};
#endif//ATTRIBUTE_H
