// Hernan Teran 1/18/2021 [ 1 ]

/*
*			++++++++       +          +
*			+              +          +
*			+          +++++++++  +++++++++
*			+              +          +
*			++++++++       +          +
*/

// [ 2 ]
#include <iostream>

// [ 5 ]
void displayMenu();
void displayResult();
void errorMessage();

// [ 3 ]
int main()
{
	// [ 4 ]

	std::cout << "{Enter a value}\n";

	std::cout
		<< "\nSI Units Convertor\n"
		<< "------------------\n"
		<< "1. miles to meters\n"
		<< "2. grams to kilograms\n"
		<< "3. minutes to seconds\n\n";

	std::cerr << "[Error]: invalid input!\n";

	// [ 7 ]
	displayMenu();
	displayResult();
	errorMessage();

	// [ 8 ] - compile time errors

	return 0;
}

// [ 6 ]
void displayMenu()
{
	std::cout
		<< "SI Units Convertor\n"
		<< "------------------\n"
		<< "1. miles to meters\n"
		<< "2. grams to kilograms\n"
		<< "3. minutes to seconds\n";
}

void displayResult()
{
	std::cout << "Result: " << "...\n";
}

void errorMessage()
{
	std::cerr << "[Error]: invalid input!\n";
}
