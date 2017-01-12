// forEachLoopArray.cpp : uses a for each loop to read through to array
// and find if there is a match w a user inputted string

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	const std::string fixedArray[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
	std::cout << "Enter a name: ";
	std::string userName;
	std::cin >> userName;

	bool found(false);
	for (const auto &name : fixedArray) {
		if (name == userName) {
			found = true;
			break;
		}
	}

	if (found)
		std::cout << userName << " was found.\n";
	else
		std::cout << userName << " was not found.\n";
	
	return 0;
}

