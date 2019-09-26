#pragma once

#include <iostream>

void current_round(int round);
void win(int userScore, bool& isRunning);
void lose(int computerScore, bool& isRunning);
void versus(int userInput, int computerInput, int& userScore, int& computerScore, int& round);
void score(int userScore, int computerScore);