#pragma once

#include <string>
#include <vector>

namespace TicTacToe //Code organization. Declaration, but needs initialization.
{
	using twoDGrid= std::vector<std::vector<std::string>>; /*Making a "type alias" for conveniance and
	readability. This is the grid, or gameboard.*/

	std::vector<std::vector<std::string>> ticTacToeGrid(3, std::vector<std::string>(3));


	//This function calls other helper functions and returns void (i.e., only prints).
	//A pass by reference (i.e., making a copy).
	void playGame(twoDGrid& ticTacToeGrid);

	//A "helper" called by playGame. Not using it would complicate the program.
	void updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID);

	void printTheGrid(twoDGrid& ticTacToeGrid);
}