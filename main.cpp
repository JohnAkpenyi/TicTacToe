#include <iostream>
#include <string> 
#include "FTicTacToe.h"

std::string placeholder[9] = { " ", " "," "," ", " "," "," "," "," " };

using namespace std; 

string LetterChoice();
int ArrayChoice(); 


FTicTacToe TicGame;

int main() {

	


	cout << placeholder[0] << " | " << placeholder[1] << " | " << placeholder[2] <<endl; 
	cout << placeholder[3] << " | " << placeholder[4] << " | " << placeholder[5] <<endl; 
	cout << placeholder[6] << " | " << placeholder[7] << " | " << placeholder[8] <<endl; 

	
	ArrayChoice(); 

	while (TicGame.Won = true)
	{
		cout << placeholder[0] << " | " << placeholder[1] << " | " << placeholder[2] << endl;
		cout << placeholder[3] << " | " << placeholder[4] << " | " << placeholder[5] << endl;
		cout << placeholder[6] << " | " << placeholder[7] << " | " << placeholder[8] << endl;

		TicGame.TurnSwitch();
		ArrayChoice();
	}
	

	system("pause"); 
	return 0;
}

int ArrayChoice()
{
	int AChoice;
	cin >> AChoice;
	//placeholder 0
	if (AChoice == 1) {
		if (placeholder[0] == " ")
		{
			placeholder[0] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}

	}
	//placeholder 1		
	if (AChoice == 2) {
		if (placeholder[1] == " ")
		{
			placeholder[1] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}
	//placeholder 2		
	if (AChoice == 3) {
		if (placeholder[2] == " ")
		{
			placeholder[2] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}
	//placeholder 3		
	if (AChoice == 4) {
		if (placeholder[3] == " ")
		{
			placeholder[3] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}
	//placeholder 4		
	if (AChoice == 5) {
		if (placeholder[4] == " ")
		{
			placeholder[4] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}
	//placeholder 5		
	if (AChoice == 6) {
		if (placeholder[5] == " ")
		{
			placeholder[5] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}
	//placeholder 6		
	if (AChoice == 7) { 
		if (placeholder[6] == " ")
		{
			placeholder[6] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}
	//placeholder 7		
	if (AChoice == 8) {
		if (placeholder[7] == " ")
		{
			placeholder[7] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}
	//placeholder 8		
	if (AChoice == 9) {
		if (placeholder[8] == " ")
		{
			placeholder[8] = LetterChoice();
		}
		else
		{
			cout << "Error: Place holder already used, please use a different one." << endl;
		}
	}

	return 0;
}

string LetterChoice()
{
	string NChoice;
	cin >> NChoice;
	while (NChoice != "x")
	{
		cout << "Error";
		cin >> NChoice;
	}

	return NChoice;
}
