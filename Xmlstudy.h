#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>

class Sprite
{
public:
	std::string n;
	int x;
	int y;
	int w;
	int h;
};

void LoadXML(const char* filename, std::vector<Sprite>& sprites)
{
	sprites.clear();

	std::ifstream file(filename, std::ifstream::binary);
	std::string line;
	std::regex pattern("\"([^\"]*)\"");

	while (!file.eof())
	{
		std::getline(file, line);
		auto result = line.find("sprite");
		if (result != std::string::npos)
		{
			std::sregex_iterator current(line.begin(), line.end(), pattern);
			std::sregex_iterator end;

			int index{ 0 };
			Sprite sprtie;

			while (current != end)
			{
				std::string token = (*current)[1];
				switch (index)
				{
				case 0:
					// n = 이름
					sprtie.n = token;
					break;
				case 1:
					// x = 위치
					sprtie.x = std::stoi(token);
					break;
				case 2:
					// y = 위치
					sprtie.y = std::stoi(token);
					break;
				case 3:
					// w = 너비
					sprtie.w = std::stoi(token);
					break;
				case 4:
					// x = 위치
					sprtie.h = std::stoi(token);
					break;
				}
				index++;
				current++;
			}
			if (index>4)
			{
				sprites.push_back(sprtie);
			}
		}
	}
}