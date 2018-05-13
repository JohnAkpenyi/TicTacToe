#include "FTicTacToe.h"




FTicTacToe::FTicTacToe()
{
}






int FTicTacToe::TurnSwitch()
{
	if (turn == player1) {
		turn = player2;
	}
	else if (turn == player2) {
		turn = player1;
	}
	return turn;
}

