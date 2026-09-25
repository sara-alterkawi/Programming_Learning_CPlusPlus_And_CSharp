#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace MyPrintLib
{
	// Function to print the result
	void PrintResult(int Digit, int Number)
	{
		int freq = 0, Remainder = 0, N = Number;
		while (N > 0)
		{
			Remainder = N % 10;
			N = N / 10;
			if (Digit == Remainder)
				freq++;
		}
		cout << "The frequency of digit " << Digit << " in number " << Number << " is: " << freq << endl;
	}
}