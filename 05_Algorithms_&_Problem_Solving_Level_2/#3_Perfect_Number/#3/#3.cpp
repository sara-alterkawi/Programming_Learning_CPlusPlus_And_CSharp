// Write a program to read a number from user and check if the number is Perfect or not
// Note:Perfect Number = Sum (all divisors)
// Ex: 28 = 1 + 2 + 4 + 7 + 14
// 6 = 1 + 2 + 3
// input 28 output 28 is perfect

#include <iostream>
#include <string>
using namespace std;

// Function to read a number from the user
int ReadNumber()
{
	int Numb;
	do
	{
		cout << "Enter positiv numbers: ";
		cin >> Numb;
	} while (Numb <= 0);

	return Numb;
}

// Function to check if the number is Perfect or not
bool CheckPerfect(int Numb)
{
	int Sum = 0;
	for (int i = 1; i < Numb; i++)
	{
		if (Numb % i == 0)
			Sum += i;
	}
	return Numb == Sum;
}

// Function to print the result
 void PrintResult(int Numb)
{
	if (CheckPerfect(Numb))
		cout << Numb << " Is Perfect." << endl;
	else
		cout << Numb << " Is not Perfect." << endl;
}

 // Main function
int main()
{
	PrintResult(ReadNumber());
	return 0;
}