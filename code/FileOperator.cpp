/********************************************************************************
> FileName:	FileOperator.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Thu Jul 01 10:07:07 2021
********************************************************************************/

#include "FileOperator.h"
#include <fstream>
#include <sstream>

FileOperator::FileOperator()
{
}

FileOperator::~FileOperator()
{

}
std::tuple<bool,std::string> FileOperator::read(const std::string& fileName)
{
	std::ifstream file(fileName);
	if (file.bad())
		return std::make_tuple(false,std::string());
	std::stringstream ss;
	ss << file.rdbuf();
	return std::make_tuple(true, ss.str());
}

bool FileOperator::save(const std::string& fileName, const std::string& content)
{
	std::ofstream file(fileName);
	if (file.bad())
		return false;
	file << content;
	return true;
}
