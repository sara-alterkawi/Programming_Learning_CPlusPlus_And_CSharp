// Write a program to print all letters in the alphabet from 'A' to 'Z'.

#include <iostream>
#include <string>
using namespace std;

// Function to print all letters in the alphabet from 'A' to 'Z'
void printAlphabet()
{
	for (char letter = 'A'; letter <= 'Z'; ++letter)
	{
		cout << letter << " \n";
	}
}

// Main function
int main()
{
	printAlphabet();
	return 0;
}