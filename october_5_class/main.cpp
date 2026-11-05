#include <iostream>
#include <vector>

void print2DArray(std::vector<std::vector<std::string>> twoDArray)
{
	//An example of "hard coding":
	int numberOfMainFunctionRowsNow = 2;
	int numberOfColumnsInMainFunctionNow = 5;

	std::cout << "The size of the 2D array is: " << twoDArray.size() << std::endl;
	std::cout << "The size of the zeroth (first) row in the array is: " << twoDArray[0].size() <<
		std::endl;

	for (int rowNumber = 0; rowNumber < twoDArray.size(); rowNumber++) //"Outer loop".
	{
		for (int column = 0; column < twoDArray[0].size(); column++) /*Included [0] in the termination
			condition because it sets the counter to the column.*/
		{
			std::cout << twoDArray[rowNumber][column] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	std::vector<std::vector<std::string>> peopleInThisRoom =
	{
		//The first row followed by second row:
		{ "Student 1",		"Student 2",		"Student 3",		"Student 4",		"Student 5"},
		{ "Student 6",		"Student 7",		"Student 8",		"Student 9",	"Student 10"}
	};
	//Prints Student 1, which is at row 0, column 0:
	std::cout << peopleInThisRoom[0][0] << std::endl; //A "read" operation.

	//Changing a name of a value in this vector is a rewrite operation:
	peopleInThisRoom[0][1] = "Student 2 (rewritten)"; //Rewriting the data to a memory location for Student 2.

	//Printing all values:
	print2DArray(peopleInThisRoom);
}