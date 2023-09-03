#pragma once
#include "AnimalStudy.h"
class DogStudy :public AnimalStudy
{
public:
	enum Breed
	{
		Beagle, Doberman, Bernard
	};
private:
	Breed mBreed;
public:
	DogStudy();
	~DogStudy();

	DogStudy::Breed GetBreed() const;
	void SetBreed(DogStudy::Breed breed);
	void Roll();
};
