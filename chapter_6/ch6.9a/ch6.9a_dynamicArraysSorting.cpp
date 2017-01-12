// ch6.9a_dynamicArraysSorting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void sortArray(std::string *array, int length)
{
	// Step through each element of the array
	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we've encountered so far.
		int smallestIndex = startIndex;

		// Look for smallest element remaining in the array (starting at startIndex+1)
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// If the current element is smaller than our previously found smallest
			if (array[currentIndex] < array[smallestIndex])
				// This is the new smallest number for this iteration
				smallestIndex = currentIndex;
		}

		// Swap our start element with our smallest element
		std::swap(array[startIndex], array[smallestIndex]);
	}
}

int main()
{
	std::cout << "How many names would you like to enter? ";
	int length;
	std::cin >> length;

	std::string *names = new std::string[length];

	for (int i = 0; i < length; ++i) {
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cin >> names[i];
	}

	sortArray(names, length);

	std::cout << "\nHere is your sorted list:\n";
	for (int i = 0; i < length; ++i)
		std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';

	delete[] names;
	names = nullptr;
	return 0;
}

