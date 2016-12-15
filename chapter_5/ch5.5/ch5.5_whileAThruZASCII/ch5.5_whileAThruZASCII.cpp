// ch5.5_whileAThruZASCII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	char alphaChar = 'a';
	while (alphaChar <= 'z') {
		std::cout << alphaChar << " <---> " << static_cast<int>(alphaChar) << '\n';
		++alphaChar;
	}
		return 0;
}

