// Write a program to print all letters in the alphabet from 'A' to 'Z'.

#include <iostream>
#include <string>
using namespace std;

// Function to print all letters in the alphabet from 'A' to 'Z'
void printAlphabet()
{
    char letter = 'A';
    while (letter <= 'Z')
    {
        cout << letter << " ";
        letter++;
    }
    cout << endl;
}

// Main function
int main()
{
	printAlphabet();
	return 0;
}