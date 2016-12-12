// ch4.4b_stringLengthConcatenation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	std::cout << "Enter your full name: ";
	std::string yourName;
	std::getline(std::cin, yourName);

	std::cout << "Enter your age: ";
	int yourAge;
	std::cin >> yourAge;

	std::cout << "You've lived " << static_cast<double>(yourAge)/yourName.length() << " years for each letter in your name.\n";
	return 0;
}

