// CIS22B
// LAB4
// Cameron March
// DataChecks.h

#ifndef DATA_CHECKS
#define DATA_CHECKS

#include <iostream>
#include <string>
#include <cstdlib>

void checkPositiveInt(const std::string& input)
{
	try
	{
		int num = std::atoi(input.c_str());
		std::size_t found = input.find(".");

		if(found != std::string::npos)
		{
			throw 1;
		}
		else if(num < 0)
		{
			throw -1;
		}
		else
		{
			std::cout << "Valid, your data is a positive integer" << std::endl;
		}

	}
	catch(int e)
	{
		if(e == -1)
		{
			std::cout << "Error, your data is a negative value" << std::endl;
		}
		else if(e == 1)
		{
			std::cout << "Error, your data is not an integer" << std::endl;
		}
	}
}

void checkDouble(const std::string& input)
{
	try
	{
		std::size_t found = input.find(".");

		if(input.find_first_not_of("0123456789.") != std::string::npos)
		{
			throw 0;
		}
		else if(found == std::string::npos)
		{
			throw 1;
		}
		else
		{
			std::cout << "Valid, your data is a double number" << std::endl;
		}
	}
	catch(int e)
	{
		if(e == 0)
		{
			std::cout << "Error, your data contains non-numeric characters" << std::endl;
		}
		else if(e == 1)
		{
			std::cout << "Error, your data is not a double" << std::endl;
		}
	}
}

void checkAlpha(const std::string& input)
{
	try
	{
		if(input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos)
		{
			throw 1;
		}
		else
		{
			std::cout << "Valid, your string data is ok" << std::endl;
		}
	}
	catch(int e)
	{
		if(e == 1)
		{
			std::cout << "Error, your data contains non-alpha characters in the string" << std::endl;
		}
	}
}

void checkState(const std::string& input)
{
	try
	{
		if(input.compare("CA") == 0 || input.compare("NY") == 0 ||
			input.compare("WA") == 0 || input.compare("HI") == 0)
		{
			std::cout << "Valid, your 2 letter state entry is ok" << std::endl;
		}
		else
		{
			throw 1;
		}
	}
	catch(int e)
	{
		if(e == 1)
		{
			std::cout << "Error, your 2 letter state entry is not valid" << std::endl;
		}
	}
}

#endif