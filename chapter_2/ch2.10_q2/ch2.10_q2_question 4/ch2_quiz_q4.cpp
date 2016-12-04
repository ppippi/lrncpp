// ch2_quiz_q4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constants.h"

double initHeight() {
	std::cout << "Enter the initial height of the tower in meters: ";
	int h;
	std::cin >> h;
	return h;
}

void findHeight(double h) {
	for (double i = 0; i < 100; i++) {
		double newh = h - (myConstants::grav * i * i) / 2;
		if (newh > 0) {
			std::cout << "At " << i << " seconds, the ball is at " << newh << " meters \n";
		}
		else if (newh == 0 || newh < 0){
			std::cout << "At " << i << " seconds, the ball is on the ground.\n";
			break;
		}
	}
}

int main()
{
	findHeight(initHeight());
	return 0;
}

