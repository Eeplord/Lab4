// CIS22B
// LAB4
// Cameron March
// PartB_Main.cpp

#include <iostream>
#include <fstream>
#include <string>

#include "PartB_DataChecks.h"

int main()
{
	// Test1: File already exists
	std::cout << "Test 1: ";
	checkFile("Data.txt");

	// Test2: File doesn't exist
	std::cout << "Test 2: ";
	checkFile("Test.txt");

	return 0;
}
