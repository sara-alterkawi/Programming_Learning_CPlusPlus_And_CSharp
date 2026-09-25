#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace MyInputLib
{
	// Function to read a positive number
	int ReadNumber(string message)
	{
		int N;
		do
		{
			cout << message;
			cin >> N;
		} while (N < 0);
		return N;
	}
}