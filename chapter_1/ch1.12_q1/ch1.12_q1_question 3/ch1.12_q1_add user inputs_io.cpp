#include "stdafx.h"
#include <iostream>

//asks user for input, stores and returns variable
int readNumber() {
	std::cout << "Enter a number: ";
	int userNumber;
	std::cin >> userNumber;
	return userNumber;
}

//outputs added value to console
void writeAnswer(int addAnswer) {
	std::cout << "Your two numbers added together: " << addAnswer << std::endl;
}