// ch5.x_q2_hiLoRandGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime> // for time()

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																				 // evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

// returns true if the user won, false if they lost
bool playGame(int guesses, int number)
{
	// Loop through all of the guesses
	for (int count = 1; count <= guesses; ++count)
	{
		std::cout << "Guess #" << count << ": ";
		int guess;
		std::cin >> guess;

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else // guess == number
			return true;
	}

	return false;
}

bool playAgain()
{
	// Keep asking the user if they want to play again until they pick y or n.
	char ch;
	do
	{
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;
	} while (ch != 'y' && ch != 'n');

	return (ch == 'y');
}

int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // discard the first result because rand() doesn't randomize the first random number very well in Visual Studio

	const int guesses = 7; // the user has this many guesses

	do // while the user still wants to play
	{
		int number = getRandomNumber(1, 100); // this is the number the user needs to guess

		std::cout << "Let's play a game.  I'm thinking of a number.  You have " << guesses << " tries to guess what it is.\n";

		bool won = playGame(guesses, number);
		if (won)
			std::cout << "Correct!  You win!\n";
		else
			std::cout << "Sorry, you lose.  The correct number was " << number << "\n";

	} while (playAgain());

	std::cout << "Thank you for playing.\n";
	return 0;
}