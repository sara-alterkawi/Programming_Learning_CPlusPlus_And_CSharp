// Write a program to print numbers from N to 1 : N inputed by user

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

// Function to print numbers from N to 1
void printRangeFrom1ToN(int N)
{
	cout << "Range:" << endl;
	for (int counter = N; counter >= 1; counter--)
		cout << counter << endl;

}

// Main function
int main()
{
	printRangeFrom1ToN(readNumb());
	return 0;
}