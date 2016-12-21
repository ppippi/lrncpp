// ch6.3_printArrayViaLoop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	const int arrayLength = sizeof(array) / sizeof(array[0]);

	for (int index = 0; index < arrayLength; ++index)
		std::cout << array[index] << std::endl;
	
	return 0;
}

