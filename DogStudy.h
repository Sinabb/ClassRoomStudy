#pragma once
#include "AnimalStudy.h"
#include <iostream>

class Dog : public Animal
{
public:
	enum Breed
	{
		Beagle,Doberman,Bernard
	};
private:
	Breed mBreed;
public:
	Dog();
	~Dog();

	Dog::Breed GetBreed() const;
	void SetBreed(Dog::Breed breed);
	void Roll();
};