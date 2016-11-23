// ch1_doublenumber.cpp : Takes in number from user and outputs number multiplied by 2

#include "stdafx.h"
#include <iostream>

int getNumber();
int doubleNumber(int user_number);

int main() {
	std::cout << "The doubled number is " << doubleNumber(getNumber()) << std::endl;
	return 0;
}

int getNumber() {
	std::cout << "Enter a number: " << std::endl;
	int user_number;
	std::cin >> user_number;
	return user_number;
}

int doubleNumber(int user_number) {
	return user_number * 2;
}
