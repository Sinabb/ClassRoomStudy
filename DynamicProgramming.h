#pragma once
#include <iostream>
#include <vector>

int64_t fibonacci(const int n)
{
	if (n == 0)
	{
		return 0;
	}
	std::vector<int64_t> table(n + 1);
	table[1] = 1;

	for (int i = 0; i <= n; i++)
	{
		if (i + 2 <= n) 
		{
			table[i] = table[i - 1] + table[i - 2];
		}	
	}
	return table[n];
}
