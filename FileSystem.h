#pragma once
#include <iostream>
#include <fstream>

bool LoadFile(const char* filename)
{
	std::ifstream ist(filename);
	if (!ist)
	{
		std::cerr << filename << "파일을 찾을ㅇ 수 없습니다" << std::endl; 
		return false;
	}
	char ch;
	while (!ist.bad())
	{
		if (!ist.fail())
		{
			std::cerr << " 파일이 손상되었습니다." << std::endl;
			ist.close();
			return false;
		}

		if (!ist.fail())
		{
			std::cerr << "잘못된 파일 포멧입니다" << std::endl;
			ist.close();
			return false;
		}
		std::cout << ch;
	}
	ist.close();
	return true;
}
