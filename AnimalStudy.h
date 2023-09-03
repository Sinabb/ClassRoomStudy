#pragma once
#include <iostream>

class Animal
{
protected:
	int mAge();
	int mWeight();

public:
	Animal();
	~Animal();

	int GetAge() const;
	void setAge(int age);
	int GetWegiht() const;
	void SetWeight(int weight);

	void sound();
};
