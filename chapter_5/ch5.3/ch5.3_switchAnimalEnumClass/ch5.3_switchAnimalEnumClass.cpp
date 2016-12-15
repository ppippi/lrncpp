// ch5.3_switchAnimalEnumClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

enum Animal {
	ANIMAL_PIG,
	ANIMAL_CHICKEN,
	ANIMAL_GOAT,
	ANIMAL_CAT,
	ANIMAL_DOG,
	ANIMAL_OSTRICH
};

std::string getAnimalName(Animal animal) {
	switch (animal) {
	case ANIMAL_CHICKEN:
		return "chicken";
	case ANIMAL_OSTRICH:
		return "ostrich";
	case ANIMAL_PIG:
		return "pig";
	case ANIMAL_GOAT:
		return "goat";
	case ANIMAL_CAT:
		return "cat";
	case ANIMAL_DOG:
		return "dog";
	default:
		return "error: no animal detected";
	}
}

std::string printNumberOfLegs(Animal animal) {
	switch (animal) {
	case ANIMAL_CHICKEN:
	case ANIMAL_OSTRICH:
		return "2";
		break;
	case ANIMAL_PIG:
	case ANIMAL_GOAT:
	case ANIMAL_CAT:
	case ANIMAL_DOG:
		return "4";
		break;
	default:
		return "error: no animal's legs detected";
	}
}


int main()
{
	std::cout << "A " << getAnimalName(ANIMAL_PIG) << " has " << printNumberOfLegs(ANIMAL_PIG) << " legs.\n";
	std::cout << "An " << getAnimalName(ANIMAL_OSTRICH) << " has " << printNumberOfLegs(ANIMAL_OSTRICH) << " legs.\n";
	return 0;
}

