// ch6.3_userInputPrintArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	int number; 
	do {
		std::cout << "Enter a number from 1 to 9: ";
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear(); // reset any error flags
			std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
		}
		}while (number < 1 || number > 9);

	int arrayNum[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	const int arrayNumLength = sizeof(arrayNum) / sizeof(arrayNum[0]);

	for (int index = 0; index < arrayNumLength; ++index)
		std::cout << arrayNum[index] << " ";

	std::cout << '\n';

		for (int index = 0; index < arrayNumLength; ++index) {
			if (arrayNum[index] == number){
				std::cout << "The number " << number << " has index " << index << '\n';
				break;
			}
		}

	return 0;
}

