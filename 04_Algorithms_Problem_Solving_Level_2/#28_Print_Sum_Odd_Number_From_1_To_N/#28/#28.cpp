// Write a program to sum odd numbers from 1 to N inputed by user

#include <iostream>
#include <string>
using namespace std;

// 
enum enOddOrEven {Odd = 1, Even = 2};

// Function to red number from user
int readNumb()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}


// Function to sum odd numbers from 1 to N
enOddOrEven checkOddOrEven(int num)
{
	if (num % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

//
int sumOddNumbersFrom1ToN(int N)
{
	int sum = 0;
	cout << "Sum odd numbers = ";
	for (int counter = 1; counter <= N; counter++) {
		if (checkOddOrEven(counter) == enOddOrEven::Odd)
			sum += counter;
	}
	return sum;
}
// Main function
int main()
{
	cout << sumOddNumbersFrom1ToN(readNumb()) << endl;
	return 0;
}