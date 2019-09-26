#include "computer.h"

int computer_choice()
{
	int computerInput = 0;
	const int maxChoice = 3;


	computerInput = rand() % maxChoice + 1;
	return computerInput;
}