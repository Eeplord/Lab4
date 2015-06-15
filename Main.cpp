// CIS22B
// LAB4
// Cameron March
// Main.cpp

#include <iostream>
#include <fstream>
#include <string>

#include "DataChecks.h"

int main()
{
	std::ifstream inFile("Data.txt");
	std::string input;
	int count = 1;

	while(inFile >> input)
	{
		std::cout << "Test " << count << ": ";

		if(count <= 3)
		{
			checkPositiveInt(input);
		}
		else if(count <= 6)
		{
			checkDouble(input);
		}
		else if(count <= 8)
		{
			checkAlpha(input);
		}
		else
		{
			checkState(input);
		}

		count++;
	}

	return 0;
}
