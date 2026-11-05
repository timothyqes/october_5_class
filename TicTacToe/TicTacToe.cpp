#include "ticTacToe.h"

#include <iostream>
#include <string>

void TicTacToe::playGame(twoDGrid& TicTacToeGrid)
{
	std::cout << "Player X, enter your move: " << std::endl;
	std::cout << "Allowed moves are: " << std::endl;
	std::cout << "abc" << std::endl; //Prevents the user from saying 0, 0; or 1, 2; etc.
	std::cout << "def" << std::endl;
	std::cout << "ghi" << std::endl;

	std::string playerXMove;
	
	std::getline(std::cin, playerXMove);

	//ticTacToeGrid[0][0] = "X";
	updateGrid(ticTacToeGrid, playerXMove, "X");

	//After X makes a move, we should show 0 what the updated rid looks like:
	printTheGrid(ticTacToeGrid);
	
	/*Now player 0 moves: ***********/
	std::cout << std::endl << std::endl; //Spacing of two blank lines
	std::cout << "Now player 0 may make a move. " << std::endl;
	std::string playerOMove;
	std::getline(std::cin, playerOMove);


	updateGrid(ticTacToeGrid, playerOMove, "O"); //Argument could mean input.

	printTheGrid(ticTacToeGrid);

} //The end of playGame function.

void TicTacToe::updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID)
{
	//Switch requires chars or ints. Strings will not work.

	if (theMove == "a")
	{
		ticTacToeGrid[0][0] = playerID;
	}
	
	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID;
	}
	
	//Etc. until "i".
}

void TicTacToe::printTheGrid(twoDGrid& ticTacToeGrid)
{
	for (int row = 0; row < ticTacToeGrid.size(); row++)
	{
		for (int col = 0; col < ticTacToeGrid[0].size(); col++)
		{
			std::cout << ticTacToeGrid[row][col] << " ";
		}
		std::cout << std::endl;
	}
}

//Refactoring means rewriting code that did not work before.
