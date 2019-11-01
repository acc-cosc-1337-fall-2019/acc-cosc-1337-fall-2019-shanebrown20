#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test game over")
{
	TicTacToe3 board;
	REQUIRE(board.game_over() == false);
}
TEST_CASE("Test set first player X")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}
TEST_CASE("Test set first player O")
{
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}
TEST_CASE("Test win by first column")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second column")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third column")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by first row")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second row")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third row")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by diagonal top left")
{
	TicTacToe3 board;
	board.start_game("O");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "O");
}
TEST_CASE("Test win by diagonal bottom left")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test for no winner")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);//X         
	board.mark_board(2);//O          
	board.mark_board(3);//X          
	board.mark_board(5);//O          
	board.mark_board(4);//X 
	board.mark_board(7);//O    
	board.mark_board(9);//X 
	board.mark_board(6);//O    
	board.mark_board(8);//X 


	//no one wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}


TEST_CASE("Test win by first column 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second column 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third column 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by first row 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by second row 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by third row 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by diagonal top left 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test win by diagonal bottom left 4")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test for no winner 4")
{
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(1);//X         
	board.mark_board(2);//O          
	board.mark_board(3);//X          
	board.mark_board(4);//O          
	board.mark_board(5);//X 
	board.mark_board(6);//O    
	board.mark_board(7);//X 
	board.mark_board(8);//O    
	board.mark_board(9);//X
	board.mark_board(10);//X         
	board.mark_board(11);//O          
	board.mark_board(12);//X          
	board.mark_board(14);//O          
	board.mark_board(13);//X 
	board.mark_board(16);//O    
	board.mark_board(15);//X 
	


	//no one wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}
