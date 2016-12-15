#include "stdafx.h"
#include <iostream>

//sums 1 to given value
int sumTo(int value) {
	int total{ 0 };
	for (int iii = 1; iii <= value; ++iii)
		total += iii;
	return total;
}

int main()
{
	std::cout << sumTo(5) << '\n';
	return 0;
}

