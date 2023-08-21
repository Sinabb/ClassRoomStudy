#pragma once
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