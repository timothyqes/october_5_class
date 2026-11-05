#include "ticTacToe.h"

#include <iostream>

void demoPassByReference()
{
	//Demoing the meaning of a reference variable.
	int a = 123;

	int copyOfA = a; //A shallow copy that has no "&".

	int& aliasOfA = a; //A deeper copy. Could also include "&" right after "int".

	std::cout << "The value of a is: " << a << std::endl;
	std::cout << "The value of the copy of a is: " << copyOfA << std::endl;

	//Updating the value of a:
	a = 456;
	std::cout << "The updated value of a is: " << a << std::endl;
	std::cout << "The value of the copy of a is: " << aliasOfA << std::endl;
}

int main()
{
	std::vector<std::vector<std::string>> ticTacToeGrid(3, std::vector<std::string>(3));
	//The line above makes an empty 2D array of size 3 x 3.

	TicTacToe::playGame(ticTacToeGrid); //A prefix.
}