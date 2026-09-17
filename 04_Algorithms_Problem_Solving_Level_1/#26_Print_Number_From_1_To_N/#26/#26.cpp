// Write a program to print numbers from 1 to N inputed by user

#include <iostream>
#include <string>
using namespace std;

// Function to red number from user
int readNumb()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}


// Function to print numbers from 1 to N
void printRangeFrom1ToN(int N)
{
	cout << "Range:" << endl;
	for (int counter = 1; counter <= N; counter++)
		cout << counter << endl;

}


// Main function
int main()
{
	printRangeFrom1ToN(readNumb());
	return 0;
}