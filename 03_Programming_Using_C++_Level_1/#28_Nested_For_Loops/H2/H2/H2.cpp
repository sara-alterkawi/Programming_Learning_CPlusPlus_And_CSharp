// Write a program that prints in first line 10 stars, in second line 9 stars, and so on until the last line with 1 star.
#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
	// Loop for each line
	for (int i = 10; i >= 1; i--)
	{
		// Print star for the current line
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		// Move to the next line
		cout << endl;
	}
	return 0;
}