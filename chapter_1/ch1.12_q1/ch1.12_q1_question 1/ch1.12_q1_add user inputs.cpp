// ch1.12_q1_add user inputs.cpp : Takes two user inputs and adds them together
//

#include "stdafx.h"
#include <iostream>

//declarations
int addAnswer;
int readNumber();
void writeAnswer(int);

//adds two user inputs and outputs to console
int main()
{
	addAnswer = readNumber() + readNumber();
	writeAnswer(addAnswer);
	return 0;
}

//asks user for input, stores and returns variable
int readNumber() {
	std::cout << "Enter a number: ";
	int userNumber;
	std::cin >> userNumber;
	return userNumber;
}

//outputs added value to console
void writeAnswer(int) {
	std::cout << "Your two numbers added together: " << addAnswer << std::endl;
}
