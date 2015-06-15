// CIS22B
// LAB4
// Cameron March
// DataChecks.h

#ifndef DATA_CHECKS
#define DATA_CHECKS

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

void checkPositiveInt(const std::string& input)
{
	try
	{
		int num = std::strtol(input.c_str(), NULL, 10);
		std::size_t found = input.find(".");

		if(found != std::string::npos)
		{
			throw 2;
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
		else if(e == 2)
		{
			std::cout << "Error, your data is not an integer" << std::endl;
		}
	}
}

void checkDouble(const std::string& input)
{
	
}

#endif