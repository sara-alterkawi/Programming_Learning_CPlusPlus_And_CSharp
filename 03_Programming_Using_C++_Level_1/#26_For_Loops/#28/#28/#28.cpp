// Write a program to sum odd numbers from 1 to N inputed by user

#include <iostream>
#include <string>
using namespace std;

// Function to sum odd numbers from 1 to N
int CalcOddSum(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i = i + 2)
	{
		sum += i;
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
	int result = CalcOddSum(N);
	cout << "Sum of odd numbers from 1 to " << N << " is: " << result << endl;
	return 0;
}