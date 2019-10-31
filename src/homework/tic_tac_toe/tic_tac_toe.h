//h
#include <vector>
#include <string>
#include <iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string; using std::vector; using std::ostream;

class TicTacToe
{
public:
	TicTacToe() {};
	TicTacToe(int size) : pegs(size * size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToe & b);
	friend std::istream & operator >> (std::istream & in, TicTacToe & b);

protected:
	vector<string> pegs;
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();

private:
	void set_next_player();
	
	void clear_board();
	bool check_board_full();
	void set_winner();
	string next_player;
	string winner;
	
};

#endif TIC_TAC_TOE_H