//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	
	for (int i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6] && pegs[i] != " ")
		{
			return true;
		}
		
	}

	return false;
}

bool TicTacToe::check_row_win()
{
	for (int i = 0; i <= 6; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2] && pegs[i] != " ")
		{
			return true;
		}
	}
		return false;
	
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[0] == pegs[8] && pegs [0] != " ")
	{
		return true;
	}
	else if (pegs[2] == pegs[4] && pegs[2] == pegs[6] && pegs[2] != " ")
	{
		return true;
	}
	else
	{
		return false;
	}
}
 
void TicTacToe::clear_board()
{
	for (int i = 0; i <= 8; ++i)
	{
		pegs[i] = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (int i = 0; i <= 8; ++i)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
		
	}
	return true;
	
}
bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		return true;
	}
	else
	{
		return false;
	}
}
void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}
void TicTacToe::mark_board(int position)
{
	pegs[position -1] = next_player;
	set_next_player();
}
string TicTacToe::get_player()const
{
	return next_player;
}
void TicTacToe::display_board()const
{
	int space = 0;
	for (int row = 1; row <= 3; row++)
	{
		for (int i = 1; i <= 3; i++)
		{
			cout << pegs[space] << "|";
			space++;
		}
		cout << "\n";
	}
}

