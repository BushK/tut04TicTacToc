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