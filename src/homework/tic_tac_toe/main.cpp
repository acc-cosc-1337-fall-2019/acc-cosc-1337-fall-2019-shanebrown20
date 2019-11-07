#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::cout; using std::cin;

int main() 
{
	string player;
	int position;
	unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	int game_type;

	auto user_choice = 'y';
	do {
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		unique_ptr<TicTacToe> board;

		if (game_type == 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else
		{
			board = std::make_unique<TicTacToe4>();
		}
		
		cout << "Choose X or O for player one: \n";
		cin >> player;


		board->start_game(player);
		while(board->game_over() == false)
		{
			
			cin >> *board;
			cout << *board;
			if (board->game_over() == true)
			{
				cout << "Game over\n";
				break;
			}

		}
		manager->save_game(board);

		cout << "Would you like to play again? Y or N: \n";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');

	cout << "History: \n";
	cout << *manager;
	return 0;
}