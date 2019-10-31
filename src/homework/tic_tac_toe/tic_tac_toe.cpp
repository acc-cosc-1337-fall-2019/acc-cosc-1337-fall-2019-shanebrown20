//cpp
#include "tic_tac_toe.h"


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

	return false;
}

bool TicTacToe::check_row_win()
{
	
		return false;
	
}

bool TicTacToe::check_diagonal_win()
{
	
		return false;
	
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
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
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

string TicTacToe::get_winner()const
{
	return winner;
}
std::ostream & operator<<(std::ostream & out, const TicTacToe & board)
{
	int space = 0;
	for (int row = 1; row <= 3; row++)
	{
		for (int i = 1; i <= 3; i++)
		{
			out << board.pegs[space] << "|";
			space++;
		}
		out << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & board)
{
	int position;
	cout << "Enter position 1-9 for " << board.get_player() << " ";
	in >> position;
	board.mark_board(position);
	return in;
	
}

void TicTacToe::set_winner()
{
	
	if (next_player == "X")
	{
		winner = "O";

	}
	else
	{
		winner = "X";
	}
}