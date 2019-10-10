#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

int main() 
{
	string player;
	int position;

	TicTacToe board;
	auto user_choice = 'y';
	do {
		cout << "Choose X or O for player one: \n";
		cin >> player;
		board.start_game(player);
		for (int turn = 0; turn < 9; turn++)
		{
			cout << "Enter position 1-9 for " << board.get_player() << " ";
			cin >> position;
			board.mark_board(position);
			board.display_board();
			if (board.game_over() == true)
			{
				cout << "Player " << board.get_player() << " is the winner!";
				break;
			}

		}

		cout << "Would you like to play again? Y or N: \n";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');
	return 0;
}