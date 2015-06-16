// CIS22B
// LAB4
// Cameron March
// PartA_DataChecks.h

#ifndef PART_A_DATA_CHECKS
#define PART_A_DATA_CHECKS

#include <iostream>
#include <string>
#include <cstdlib>

// Checks if input is a positive integer
void checkPositiveInt(const std::string& input)
{
	try
	{
		// Convert the string to an int
		int num = std::atoi(input.c_str());

		// Search for a decimal point
		std::size_t found = input.find(".");

		// If a decimal point is found
		if(found != std::string::npos)
		{
			// Throw 'not an integer' error
			throw 1;
		}
		// If the integer is negative
		else if(num < 0)
		{
			// Throw 'negative integer' error
			throw -1;
		}
		// If all tests are passed
		else
		{
			// Print a success statement
			std::cout << "Valid, your data is a positive integer" << std::endl;
		}

	}
	// Catch exceptions
	catch(int e)
	{
		// Negative Integer exception
		if(e == -1)
		{
			// Print failure statement
			std::cout << "Error, your data is a negative value" << std::endl;
		}
		// Not an Integer exception
		else if(e == 1)
		{
			// Print failure statement
			std::cout << "Error, your data is not an integer" << std::endl;
		}
	}
}

// Checks if input is a double
void checkDouble(const std::string& input)
{
	try
	{
		// Search for a decimal point
		std::size_t found = input.find(".");

		// If the string contains non-numeric characters
		if(input.find_first_not_of("0123456789.") != std::string::npos)
		{
			// Throw 'non-numeric characters' exception
			throw 0;
		}
		// If string does not have a decimal point
		else if(found == std::string::npos)
		{
			// Throw 'not a double' exception
			throw 1;
		}
		// If all tests are passed
		else
		{
			// Print success statement
			std::cout << "Valid, your data is a double number" << std::endl;
		}
	}
	// Catch exceptions
	catch(int e)
	{
		// Non-Numeric Characters exception
		if(e == 0)
		{
			// Print failure statement
			std::cout << "Error, your data contains non-numeric characters" << std::endl;
		}
		// Not a Double exception
		else if(e == 1)
		{
			// Print failure statement
			std::cout << "Error, your data is not a double" << std::endl;
		}
	}
}

// Checks if input only has alphabetical characters
void checkAlpha(const std::string& input)
{
	try
	{
		// If string contains non-alpha character
		if(input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos)
		{
			// Throw 'non-alpha character' exception
			throw 1;
		}
		else
		{
			// Print success statement
			std::cout << "Valid, your string data is ok" << std::endl;
		}
	}
	// Catch exceptions
	catch(int e)
	{
		// Non-Alpha Character exception
		if(e == 1)
		{
			// Print failure statement
			std::cout << "Error, your data contains non-alpha characters in the string" << std::endl;
		}
	}
}

// Checks input is a valid 2-character state code
void checkState(const std::string& input)
{
	try
	{
		// If string is any of the valid state codes
		if(input.compare("CA") == 0 || input.compare("NY") == 0 ||
			input.compare("WA") == 0 || input.compare("HI") == 0)
		{
			// Print success statement
			std::cout << "Valid, your 2 letter state entry is ok" << std::endl;
		}
		else
		{
			// Throw 'invalid state entry' exception
			throw 1;
		}
	}
	// Catch exceptions
	catch(int e)
	{
		// Invalid State Entry exception
		if(e == 1)
		{
			// Print failure statement
			std::cout << "Error, your 2 letter state entry is not valid" << std::endl;
		}
	}
}

#endif