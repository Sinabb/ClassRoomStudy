#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>


void PrintVector2D() 
{
    int m{}, n{};
    std::cin >> m >> n;
    std::vector<std::vector<int>> v(m, std::vector<int>(n, -1));
    std::cout << "{" << std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << "{";

        for (int j = 0;  j < v[i].size(); j++)
        {
            std::cout << v[i][j];
            if (j<v[i].size()-1)
            {
            std::cout << ",";
            }
        }
        std::cout << "}";
        if (i < v.size() - 1)
        {
            std::cout << "," << std::endl;
        }
    }
    std::cout << "}" << std::endl;
}

bool Image(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    return s == t;
}

void CheckImage() {
    std::string s = "acdfc1";
    std::string t = "dca1cf";

    std::cout << std::boolalpha << Image(s, t) << std::endl;
}

char MaxLetter(const std::string& s)
{
    std::map<char, int> table;
    char maxChar{};
    int max{ -1 };

    for (const auto& e : s)
    {
        table[e]++;
        if (table[e] > max)
        {
            maxChar = e;
            max= table[e];
        }
    }

    return maxChar;
}

void Letter()
{
    std::cout << MaxLetter("hheeeehhhhlllooll") << std::endl;
}

/*
#include <iostream>
#include <vector>

void Vector() {
    int m = 3;
    int n = 2;

    std::vector<std::vector<int>> LowColumn(m, std::vector<int>(n, -1));

    std::cout << "m: " << m << std::endl;
    std::cout << "n: " << n << std::endl;
    std::cout << "{" << std::endl;
    for (const auto& row : LowColumn) {
        std::cout << "  {";
        for (const auto& value : row) {
            std::cout << " " << value << ",";
        }
        std::cout << " },"<<std::endl;
    }
    std::cout << "}" << std::endl;

}
*/

/*
    #include <iostream>
#include <string>
#include <algorithm>

bool Image(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    return s == t;
}

void CheckImage() {
    std::string s = "acdfc1";
    std::string t = "dca1cf";

    bool result = Image(s, t);

    if (result) {
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }
}
*/