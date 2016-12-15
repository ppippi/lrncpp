// ch5.3_switchCases.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int calculate(int x, int y, char z) {
	switch (z) {
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		case '%':
			return x % y;
		default:
			std::cout << "error, no operand was input";
			return 0;
	}
}


int main()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	std::cout << "Enter a second integer: ";
	int y;
	std::cin >> y;

	std::cout << "Enter an operand (+,-,*,/,%): ";
	char z;
	std::cin >> z;

	std::cout << x << z << y << " is equal to: " << calculate(x, y, z) << std::endl;
		
	return 0;
}

