#include "main.h"

int main()
{
	bool isRunning = true;
	int userScore = 0;
	int computerScore = 0;
	srand(time(NULL));
	int round = 1;

	while (isRunning)
	{
		current_round(round);
		score(userScore, computerScore);
		versus(user_choice(), computer_choice(), userScore, computerScore, round);
		win(userScore, isRunning);
		lose(computerScore, isRunning);
	}

	system("pause");
	return EXIT_SUCCESS;
}