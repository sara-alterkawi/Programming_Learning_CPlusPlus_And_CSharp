// Write a program to print numbers from N to 1 : N inputed by user

#include <iostream>
#include <string>
using namespace std;

// Function to print numbers from 1 to N
void printNumbers(int N)
{
	while (N > 0)
	{
		cout << N << endl;
		N--;
	}
}

// Function to read input from user
int ReadInput()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}

// Main function
int main()
{
	int N = ReadInput();
	printNumbers(N);
	return 0;
}