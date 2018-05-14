#include <iostream>
#include <string> 
#include "FTicTacToe.h"

std::string placeholder[9] = { " ", " "," "," ", " "," "," "," "," " };

using namespace std; 

string LetterChoice();
int ArrayChoice(); 
int PrintTurn(); 
void WinConditions(); 
void printwin();
string Intro();


FTicTacToe TicGame;


string player1name = "";
string player2name = "";

int main() {


	Intro(); 
	PrintTurn();
	   
	 

	while (TicGame.WON == false)
	{
         ArrayChoice();

		 

		cout << placeholder[0] << " | " << placeholder[1] << " | " << placeholder[2] << endl;
		cout << placeholder[3] << " | " << placeholder[4] << " | " << placeholder[5] << endl;
		cout << placeholder[6] << " | " << placeholder[7] << " | " << placeholder[8] << endl;

		if (TicGame.turndone == true)
		{
          TicGame.TurnSwitch(); 
		}
		
		WinConditions(); 
		//If Game is not won, print whos turn it is next
		if (TicGame.WON == false)
		{
          PrintTurn();
		}
		 

	}

	system("pause"); 
	return 0;
}

string Intro() {

	cout << "Hey! Welcome to Tic Tac Toe on the command line!" << endl; 

	cout << "To play this game, you need a keyboard lol," << endl;

	cout << "To pick where you want to place your 'x' or 'o', you must first pick which space you want to put it in, the spaces range from 1 to 9, as you will see below" << endl; 

	cout << "Player 1 can only use 'x', Player 2 can only use 'o'" << endl; 

	cout << "Name of player 1: ";
	cin >> player1name; cout << endl;

	cout << "Name of player 2: ";
	cin >> player2name; cout << endl;

	return player1name, player2name; 
}


	

int ArrayChoice()
{
	int AChoice;
	cout << "please choose a space: "; 
	cin >> AChoice;
	cout << endl;
	//placeholder 0
	if (AChoice == 1) {
		if (placeholder[0] == " ")
		{
			placeholder[0] = LetterChoice();
			TicGame.turndone = true; 
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false; 
		}

	}
	//placeholder 1		
	if (AChoice == 2) {
		if (placeholder[1] == " ")
		{
			placeholder[1] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}
	//placeholder 2		
	if (AChoice == 3) {
		if (placeholder[2] == " ")
		{
			placeholder[2] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}
	//placeholder 3		
	if (AChoice == 4) {
		if (placeholder[3] == " ")
		{
			placeholder[3] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}
	//placeholder 4		
	if (AChoice == 5) {
		if (placeholder[4] == " ")
		{
			placeholder[4] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}
	//placeholder 5		
	if (AChoice == 6) {
		if (placeholder[5] == " ")
		{
			placeholder[5] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}
	//placeholder 6		
	if (AChoice == 7) { 
		if (placeholder[6] == " ")
		{
			placeholder[6] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}
	//placeholder 7		
	if (AChoice == 8) {
		if (placeholder[7] == " ")
		{
			placeholder[7] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}
	//placeholder 8		
	if (AChoice == 9) {
		if (placeholder[8] == " ")
		{
			placeholder[8] = LetterChoice();
			TicGame.turndone = true;
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
			TicGame.turndone = false;
		}
	}

	return 0;
}

string LetterChoice()
{
	string NChoice;
	cin >> NChoice;
	if (TicGame.turn == TicGame.player1)
	{

	
	   while (NChoice != "x")
	   {
		   cout << "Error, please enter 'x'" << endl;
		   TicGame.turndone = false;
		   cin >> NChoice;
		   if (NChoice == "x") {
			   TicGame.turndone = true; 
		   }

	   }
    }
	else if(TicGame.turn == TicGame.player2)
	{
		while (NChoice != "o")
		{
			cout << "Error, please enter 'o'" << endl; 
			TicGame.turndone = false;
			cin >> NChoice; 
			if (NChoice == "o") {
				TicGame.turndone = true;
			}
		}
	}
	return NChoice;
}


int PrintTurn() {
	

	if (TicGame.turn == TicGame.player1)
	{
		cout << player1name <<"'s Turn " <<endl;
	}
	else if (TicGame.turn == TicGame.player2)
	{
		cout << player2name <<"'s Turn" <<endl; 
	}

	return 0; 
}
void WinConditions() {

	//HORIZONTAL CHECK
	//WinConditions P1.1
	if (placeholder[0] == "x") {
		if (placeholder[1] == "x") {
			if (placeholder[2] == "x")
			{
				printwin();
			}
		}
	}

	//WinConditions P1.2
	if (placeholder[3] == "x") {
		if (placeholder[4] == "x") {
			if (placeholder[5] == "x")
			{
				printwin();
			}
		}
	}

	//WinConditions P1.3
	if (placeholder[6] == "x") {
		if (placeholder[7] == "x") {
			if (placeholder[8] == "x")
			{
				printwin();
			}
		}
	}

	//VERTICAL CHECK

	//WinConditions P1.4
	if (placeholder[0] == "x") {
		if (placeholder[3] == "x") {
			if (placeholder[6] == "x")
			{
				printwin();
			}
		}
	}	
	
	//WinConditions P1.5
	if (placeholder[1] == "x") {
		if (placeholder[4] == "x") {
			if (placeholder[7] == "x")
			{
				printwin();
			}
		}
	}	

	//WinConditions P1.6
	if (placeholder[2] == "x") {
		if (placeholder[5] == "x") {
			if (placeholder[8] == "x")
			{
				printwin();
			}
		}
	}

	//DIAGONAL CHECK
		
	//WinConditions P1.7
	if (placeholder[0] == "x") {
		if (placeholder[4] == "x") {
			if (placeholder[8] == "x")
			{
				printwin();
			}
		}
	}
			
	//WinConditions P1.8
	if (placeholder[2] == "x") {
		if (placeholder[4] == "x") {
			if (placeholder[6] == "x")
			{
				printwin();
			}
		}
	}





//HORIZONTAL CHECK
	//WinConditions P2.1
	if (placeholder[0] == "o") {
		if (placeholder[1] == "o") {
			if (placeholder[2] == "o")
			{
				printwin();
			}
		}
	}

	//WinConditions P2.2
	if (placeholder[3] == "o") {
		if (placeholder[4] == "o") {
			if (placeholder[5] == "o")
			{
				printwin();
			}
		}
	}

	//WinConditions P2.3
	if (placeholder[6] == "o") {
		if (placeholder[7] == "o") {
			if (placeholder[8] == "o")
			{
				printwin();
			}
		}
	}

	//VERTICAL CHECK

	//WinConditions P2.4
	if (placeholder[0] == "o") {
		if (placeholder[3] == "o") {
			if (placeholder[6] == "o")
			{
				printwin();
			}
		}
	}

	//WinConditions P2.5
	if (placeholder[1] == "o") {
		if (placeholder[4] == "o") {
			if (placeholder[7] == "o")
			{
				printwin();
			}
		}
	}

	//WinConditions P2.6
	if (placeholder[2] == "o") {
		if (placeholder[5] == "o") {
			if (placeholder[8] == "o")
			{
				printwin();
			}
		}
	}

	//DIAGONAL CHECK

	//WinConditions P2.7
	if (placeholder[0] == "o") {
		if (placeholder[4] == "o") {
			if (placeholder[8] == "o")
			{
				printwin();
			}
		}
	}

	//WinConditions P2.8
	if (placeholder[2] == "o") {
		if (placeholder[4] == "o") {
			if (placeholder[6] == "o")
			{
				printwin();
			}
		}
	}

}


void printwin() {
	TicGame.WON = true;

	cout << "You Won!";
}