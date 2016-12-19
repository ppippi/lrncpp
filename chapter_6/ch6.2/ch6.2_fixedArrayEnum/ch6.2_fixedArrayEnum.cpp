// ch6.2_fixedArrayEnum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

namespace Animals {
	enum Animals {
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		MAX_ANIMALS
	};
}


int main()
{
	int animalLegs[Animals::MAX_ANIMALS]{ 2, 4, 4, 4, 2 };
	std::cout << "Elephants have " << animalLegs[Animals::ELEPHANT] << " legs.\n";
	return 0;
}

