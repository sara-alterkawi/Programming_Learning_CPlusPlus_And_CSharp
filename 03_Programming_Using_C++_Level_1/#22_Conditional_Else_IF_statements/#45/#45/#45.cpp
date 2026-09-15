// Write a program to ask the user to select Month then print the month name
#include <iostream>
#include <string>
using namespace std;

// Function to print month name based on month number
void PrintMonthName(int Month)
{
	if (Month == 1)
		cout << "January";
	else if (Month == 2)
		cout << "February";
	else if (Month == 3)
		cout << "March";
	else if (Month == 4)
		cout << "April";
	else if (Month == 5)
		cout << "May";
	else if (Month == 6)
		cout << "June";
	else if (Month == 7)
		cout << "July";
	else if (Month == 8)
		cout << "August";
	else if (Month == 9)
		cout << "September";
	else if (Month == 10)
		cout << "October";
	else if (Month == 11)
		cout << "November";
	else if (Month == 12)
		cout << "December";
	else
		cout << "Invalid Month Number";
}

// Function to get month number from user
int GetMonthNumber()
{
	int Month;
	cout << "Enter month number (1-12): ";
	cin >> Month;
	return Month;
}

// Main function
int main()
{
	int Month = GetMonthNumber();
	PrintMonthName(Month);
	return 0;
}