#pragma once
#include <string>





class FTicTacToe
{
public:
	FTicTacToe();
	int TurnSwitch();
	bool Won = false; 

private:
	int turn = 0; 
	int player1 = 0; 
	int player2 = 1; 
};

