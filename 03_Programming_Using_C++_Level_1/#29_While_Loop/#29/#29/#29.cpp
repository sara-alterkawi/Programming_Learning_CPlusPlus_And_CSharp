// Write a program to sum even numbers from 1 to N inputed by user

#include <iostream>
#include <string>
using namespace std;

// Function to sum even numbers from 1 to N
int CalcEvenSum(int N)
{
	int sum = 0;
	while (N > 0)
	{
		if (N % 2 == 0)
		{
			sum += N;
		}
		N--;
	}
	return sum;
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
	int result = CalcEvenSum(N);
	cout << "Sum of even numbers from 1 to " << N << " is: " << result << endl;
	return 0;
}