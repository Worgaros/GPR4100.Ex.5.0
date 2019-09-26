#include "player.h"

int user_choice()
{
	int userInput = 4;
	std::cout << "1 - Rock\n2 - Paper\n3 - Scissors\n\nMake your choice: ";
	std::cin >> userInput;
	return userInput;
}