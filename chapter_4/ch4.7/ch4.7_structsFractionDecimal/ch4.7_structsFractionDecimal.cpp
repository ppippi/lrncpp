// ch4.7_structsFractionDecimal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct Fraction {
	int numerator;
	int denominator;
};

void multiply(Fraction f1, Fraction f2) {
	std::cout << static_cast<float>(f1.numerator*f2.numerator) / (f1.denominator*f2.denominator) << '\n';
}


int main()
{
	Fraction f1;
	std::cout << "Enter the first numerator: ";
	std::cin >> f1.numerator;
	std::cout << "Enter the first deniminator: ";
	std::cin >> f1.denominator;

	Fraction f2;
	std::cout << "Enter the second numerator: ";
	std::cin >> f2.numerator;
	std::cout << "Enter the second deniminator: ";
	std::cin >> f2.denominator;

	multiply(f1, f2);

	return 0;
}

