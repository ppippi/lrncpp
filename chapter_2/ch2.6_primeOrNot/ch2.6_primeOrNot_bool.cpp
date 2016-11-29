#include "stdafx.h"
#include <iostream>

int userNumber() {
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
	return x;
}

bool primeOrNot(int x) {
	if (x == 2 || x == 3 || x == 5 || x == 7) {
		return true;
	}
	else {return false;}
}

void printPrime(bool primeOrNot) {
	if (primeOrNot == true) {
		std::cout << "The digit is prime." << std::endl;
	}
	else {
		std::cout << "The digit is not prime." << std::endl;
	}
}

int main() {
	printPrime(primeOrNot(userNumber()));
	return 0;
}
