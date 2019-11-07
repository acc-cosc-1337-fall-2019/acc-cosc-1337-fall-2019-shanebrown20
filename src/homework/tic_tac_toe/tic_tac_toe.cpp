
//cpp
#include "tic_tac_toe.h"


using std::cout;

TicTacToe::TicTacToe(int size)
{
	board_size = size;
	for (int i = 0; i < (size * size); i++)
	{
		pegs.push_back(" ");
	}
}

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
	for (int i = 0; i < pegs.size(); ++i)
	{
		pegs[i] = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (int i = 0; i < pegs.size(); ++i)
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
	
	for (int row = 1; row <= board.board_size; row++)
	{
		for (int i = 1; i <= board.board_size; i++)
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
	cout << "Enter position 1-" << board.board_size*board.board_size << " for " << board.get_player() << " ";
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

const std::vector<std::string>& TicTacToe::get_pegs()
{
	return pegs;
}