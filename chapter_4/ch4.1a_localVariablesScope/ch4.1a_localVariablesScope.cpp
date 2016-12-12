// ch4.1a_localVariablesScope.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int userInteger() {
	int x;
	std::cin >> x;
	return x;
}

int main()
{
	std::cout << "Enter an integer: ";
	int smaller = userInteger();
	std::cout << "Enter a larger integer: ";
	int larger = userInteger();
	
	if (smaller > larger) {
		int temp = larger;
		larger = smaller;
		smaller = temp;
		std::cout << "Swapping the values\n";
	}

	std::cout << "The smaller value is " << smaller << '\n';
	std::cout << "The larger value is " << larger << '\n';
	return 0;
}

