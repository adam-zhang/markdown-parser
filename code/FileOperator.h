/********************************************************************************
> FileName:	FileOperator.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Thu Jul 01 10:07:07 2021
********************************************************************************/
#ifndef FILEOPERATOR_H
#define FILEOPERATOR_H

#include <tuple>
#include <string>

class FileOperator
{
private:
	FileOperator();
	~FileOperator();
public:
	static std::tuple<bool,std::string> read(const std::string& fileName);
	static bool save(const std::string& fileName, const std::string& content);
};
#endif//FILEOPERATOR_H
