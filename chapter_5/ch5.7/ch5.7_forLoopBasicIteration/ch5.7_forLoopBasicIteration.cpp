#include "stdafx.h"
#include <iostream>

//print all even numbers from 0 to 20
int main()
{
	for (int iii = 0; iii <= 20; iii +=2) {
		std::cout << iii << " ";
	}

	//prints new line after all 0-20 even numbers printed
	std::cout << "\n";
	
	return 0;
}

