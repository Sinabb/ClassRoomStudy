#include <iostream>
#include "AnimalStudy.h"

Animal::Animal() : mAge{ 1 }, mWeight{ 1 }
{

}

Animal::~Animal()
{
}

int Animal::GetAge() const
{
	return mAge();
}

void Animal::setAge(int age)
{
	mAge = age;
}

int Animal::GetWegiht() const
{
	return mWeight();
}
void Animal::SetWeight(int weight)
{
	mWeight = weight;
}

void Animal::sound()
{
	std::cout << "Make a noise" << std::endl;
}