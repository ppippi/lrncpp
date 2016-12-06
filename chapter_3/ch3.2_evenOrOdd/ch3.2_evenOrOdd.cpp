// ch3.2_evenOrOdd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isEven(int x) {
	return (x % 2) == 0;
}

int main()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	if (isEven(x) == 1) {
		std::cout << "You entered an integer\n";
	}
	
	return 0;
}

