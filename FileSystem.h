#pragma once
#include <iostream>
#include <fstream>

bool LoadFile(const char* filename)
{
	std::ifstream ist(filename);
	if (!ist)
	{
		std::cerr << filename << "������ ã���� �� �����ϴ�" << std::endl; 
		return false;
	}
	char ch;
	while (!ist.bad())
	{
		if (!ist.fail())
		{
			std::cerr << " ������ �ջ�Ǿ����ϴ�." << std::endl;
			ist.close();
			return false;
		}

		if (!ist.fail())
		{
			std::cerr << "�߸��� ���� �����Դϴ�" << std::endl;
			ist.close();
			return false;
		}
		std::cout << ch;
	}
	ist.close();
	return true;
}
