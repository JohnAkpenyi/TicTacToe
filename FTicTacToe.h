#pragma once
#include <string>





class FTicTacToe
{
public:
	FTicTacToe();
	int TurnSwitch();
	bool WON = false; 
	bool turndone = true; 
    int turn = 0; 
	int player1 = 0; 
	int player2 = 1; 
	int turnstaken;
private:
	
};

