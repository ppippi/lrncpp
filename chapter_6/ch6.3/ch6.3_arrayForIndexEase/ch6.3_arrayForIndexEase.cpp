// ch6.3_arrayForIndexEase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int scores[] = { 84, 92, 76, 81, 56 };
	const int numStudents = sizeof(scores) / sizeof(scores[0]);

	int maxIndex = 0; // keep track of our largest score
	for (int student = 0; student < numStudents; ++student)
		if (scores[student] > scores[maxIndex])
			maxIndex = student;

	std::cout << "The best score was " << scores[maxIndex] << '\n';

	return 0;
}