#include "game.h"

void versus(int userInput, int computerInput, int& userScore, int& computerScore, int& round) //
{
	if (userInput == 1 && computerInput == 3 || userInput == 2 && computerInput == 1 || userInput == 3 && computerInput == 2)
	{
		std::cout << "\nYou win !\n\n--------------------\n\n";
		userScore++;
	}

	if (userInput == 1 && computerInput == 2 || userInput == 2 && computerInput == 3 || userInput == 3 && computerInput == 1)
	{
		std::cout << "\nYou loose !\n\n--------------------\n\n";
		computerScore++;
	}

	if (userInput == 1 && computerInput == 1 || userInput == 2 && computerInput == 2 || userInput == 3 && computerInput == 3)
	{
		std::cout << "\nIt's a tie !\n\n--------------------\n\n";
	}

	round++;
}

void score(int userScore, int computerScore)
{
	std::cout << "Score\nYou: " << userScore << " Computer: " << computerScore << "\n\n";
}

void current_round(int round)
{
	std::cout << "Round: " << round << "\n\n";
}

void win(int userScore, bool& isRunning)
{
	if (userScore == 3)
	{
		std::cout << "You win the game !\n\n";
		isRunning = false;
	}
}

void lose(int computerScore, bool& isRunning)
{
	if (computerScore == 3)
	{
		std::cout << "Computer win the game !\n\n";
		isRunning = false;
	}
}