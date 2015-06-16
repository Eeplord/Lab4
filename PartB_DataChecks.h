// CIS22B
// LAB4
// Cameron March
// PartB_DataChecks.h

#ifndef PART_B_DATA_CHECKS
#define PART_B_DATA_CHECKS

#include <iostream>
#include <string>
#include <fstream>

// Prints a statement determining if a file already exists
void checkFile(const std::string& input)
{
	try
	{
		// Attempting to open the file
		std::ifstream file(input.c_str());

		// If the file exists
		if(file.good())
		{
			// Close the stream and throw an exception
			file.close();
			throw 1;
		}
		// If the file doesn't exist
		else
		{
			// Close the stream and output a confirmation statement
			file.close();
			std::cout << "Valid, your file can be created" << std::endl;
		}
	}
	// Catch exceptions
	catch(int e)
	{
		if(e == 1)
		{
			// Output an error statement
			std::cout << "Error, the file you are attempting to save already exists" << std::endl;
		}
	}
}

#endif