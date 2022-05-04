// William Smith, CISP 1020, Recursion Program, 05/04/2022

// This program utilizes a recursive function in order to sum up the values within an array.
#include "Main.h"
#include <iostream>

int main()
{
	int intArray[] = { 2, 5, 5, 2, 4, 3, 6, 2, 6 };
	int arrayCount = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << calcArray(intArray, arrayCount);
}