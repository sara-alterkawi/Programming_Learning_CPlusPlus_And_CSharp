// Write a program that prints in first line from 1 to 10, in second line from 2 to 10, and so on until the last line with number 10.
#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
	// Loop through numbers from 1 to 10
	for (int i = 1; i <= 10; i++)
	{
		// Loop through numbers from i to 10
		for (int j = i; j <= 10; j++)
		{
			// Print the number followed by a space
			cout << j << " ";
		}
		// Print a new line after each row
		cout << endl;
	}
	return 0;
}