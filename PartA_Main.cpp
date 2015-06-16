// CIS22B
// LAB4
// Cameron March
// PartA_Main.cpp

#include <iostream>
#include <fstream>
#include <string>

#include "PartA_DataChecks.h"

int main()
{
	// Open file
	std::ifstream inFile("Data.txt");
	std::string input;
	int count = 1;

	// Iterate through each line
	while(inFile >> input)
	{
		// Print test number
		std::cout << "Test " << count << ": ";

		// First 3 tests
		if(count <= 3)
		{
			// Check for positive integer
			checkPositiveInt(input);
		}
		// Next 3 tests
		else if(count <= 6)
		{
			// Check for double
			checkDouble(input);
		}
		// Next 2 tests
		else if(count <= 8)
		{
			// Check for alpha characters
			checkAlpha(input);
		}
		// Last 2 tests
		else
		{
			// Check 2-character state codes
			checkState(input);
		}

		// Increase test count
		count++;
	}

	return 0;
}
