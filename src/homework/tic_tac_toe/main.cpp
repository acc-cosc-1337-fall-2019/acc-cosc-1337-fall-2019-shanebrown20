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
		while(!board.game_over())
		{
			
			cin >> board;
			cout << board;
			if (board.game_over() == true)
			{
				cout << "Winner!\n";
				break;
			}

		}

		cout << "Would you like to play again? Y or N: \n";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');
	return 0;
}