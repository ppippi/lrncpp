// ch2_quiz_q3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

double userNumber() {
	std::cout << "Enter a double number: ";
	double x;
	std::cin >> x;
	return x;
}

char userSymbol() {
	std::cout << "Enter one of the following: +, -, *, or /: ";
	char y;
	std::cin >> y;
	return y;
}

void printResult(double firstDouble, char sym, double secondDouble) {
	if (sym == '+')
		std::cout << firstDouble << '+' << secondDouble << 'is: ' << firstDouble + secondDouble << '\n';
	else if (sym == '-')
		std::cout << firstDouble << '-' << secondDouble << 'is: ' << firstDouble - secondDouble << '\n';
	else if (sym == '*')
		std::cout << firstDouble << '*' << secondDouble << 'is: ' << firstDouble * secondDouble << '\n';
	else if (sym == '/')
		std::cout << firstDouble << '/' << secondDouble << 'is: ' << firstDouble / secondDouble << '\n';
}

int main()
{
	double firstDouble{ userNumber() };
	double secondDouble{ userNumber() };
	char sym{ userSymbol() };

	printResult(firstDouble, sym, secondDouble);
	return 0;
}
