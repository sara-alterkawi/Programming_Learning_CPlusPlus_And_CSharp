// Write a Program to ask user to enter as many numbers as s/he wants, 
// each time a number entered add it to your vector,
// and ask the user if s/he wants to add more numbers until s/he says No, then print all vector elements on the screen.

#include<vector>
#include<iostream>
using namespace std;

// Function to read numbers from user and store them in a vector
void ReadNumbers(vector  <int>& vNumbers)
{
	char ReadMore = 'Y';
	int Number;
	while (ReadMore == 'Y' || ReadMore == 'y')
	{
		cout << "Please enter a number? ";
		cin >> Number; vNumbers.push_back(Number);
		cout << "\nDo you want to read more numbers? Y/N ?";
		cin >> ReadMore;
	}
}

// Function to print all numbers in the vector
void PrintVectorNumbers(vector  <int>& vNumbers)
{
	cout << "Numbers Vector: \n";
	// ranged loop
	for (int Number : vNumbers)
	{
		cout << Number << endl;
	}
	cout << endl;
}

// Main function
int main()
{
	vector <int> vNumbers;
	ReadNumbers(vNumbers);
	PrintVectorNumbers(vNumbers);
	return 0;
}