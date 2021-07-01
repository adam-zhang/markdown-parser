/********************************************************************************
> FileName:	Attribute.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Thu Jul 01 09:01:13 2021
********************************************************************************/

#include "Attribute.h"
#include <sstream>

Attribute::Attribute()
{
}

Attribute::~Attribute()
{
}

std::string Attribute::toString()
{
	std::stringstream ss;
	ss << key_ << ":" << value_;
	return ss.str();
}
