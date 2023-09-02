#pragma once
#include <iostream>

class Inventory
{
public:
	std::string GetiTem(int index) {
		if (index <0 || index >= 10)
		{
			return "invalid";
		}
		return items[index];
	}

private:
	std::string items[10];
};

void InventroyRead ()
{
	Inventory inv;
	std::cout << inv.GetiTem(20);
}