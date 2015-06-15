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

		}
		std::cout << input << std::endl;

		count++;
	}

	return 0;
}
