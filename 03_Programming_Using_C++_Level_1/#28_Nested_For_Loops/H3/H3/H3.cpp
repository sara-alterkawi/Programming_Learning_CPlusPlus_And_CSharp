// Write a program that prints in first line from 1 to 10, in second line from 1 to 9, and so on until the last line with 1.
#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
	// Loop for each line
	for (int i = 10; i >= 1; i--)
	{
		// Print numbers for the current line
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		// Move to the next line
		cout << endl;
	}
	return 0;
}