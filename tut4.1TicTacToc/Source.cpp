#include "TicTacToe.h"
#include <iostream>
using namespace std;

int main()
{
	int instructions(), choice, loop = 1, option;
	char player = 'X', progress;
	void boardOptions();		// shows how to choose a spot
	bool validOption;
	TicTacToe game;		// TicTacToe object
	game.print();
	// game loop
	while (loop = 1)
	{
		system("cls");		// clear screen
		game.print();
		// board options
		cout << endl;
		cout << "Player " << player << " ";
		boardOptions();
		cin >> option;
		while (option < 1 || option > 9)		// validates user input
		{
			cout << "Invalid, enter a number between 1 and 9!" << endl;
			cin >> option;
		}
		validOption = game.move(option, player);
		cout << "validOption: " << validOption << endl;
		while (validOption == false)		// validates chosen board position
		{
			cout << "Already taken. Pick another spot." << endl;
			cin >> option;
			validOption = game.move(option, player);
		}
		progress = game.isWon();
		if (progress == 'X' || progress == 'O')
		{
			system("cls");
			game.print();
			cout << "Congratulations Player " << player << " , you won!" << endl;
			system("pause");
			game.restart();
		}
		else if (progress == 'D')		// D - Draw
		{
			system("cls");
			game.print();
			cout << "Its a draw!" << endl;
			cout << "Player " << player << "won!" << endl;
			system("pause");
		}
		else if (progress = 'P')		// P - game in progress
		{
			if (player == 'X') player = 'O';		// change to next player
			else if (player == 'O') player = 'X';
		}

	}
	system("pause");
	return 0;
}

void boardOptions()
{
	cout << "choose option:" << endl << "1. 1A | 2. 1B | 3. 1C | 4. 2A | 4. 2B | 6. 2C | 7. 3A | 8. 3B | 9. 3C" << endl;
}