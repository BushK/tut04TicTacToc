#include "TicTacToe.h"

#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe::TicTacToe()
{
	board = "---------";
	player[0] = 'X';
	player[1] = 'O';
	score[0] = 0;
	score[1] = 0;
	draw = 0;
}

void TicTacToe::restart()
{
	board = "---------";
}

bool TicTacToe::move(int choice, char player)
{
	bool play;
	if (board[choice - 1] != '-')
	{
		play = false;
	}
	else
	{
		board[choice - 1] = player;
		play = true;
	}
	return play;
}
