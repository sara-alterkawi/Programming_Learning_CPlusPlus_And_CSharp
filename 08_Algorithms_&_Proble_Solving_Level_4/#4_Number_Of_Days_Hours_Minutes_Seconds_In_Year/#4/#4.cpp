// Write a program to print Number of:
/*
	• Days
	• Hours
	• Minutes
	• Seconds
	in a certain Year. 
*/
/*
	Example: Input
	Please enter a year to check? 2000
	Number of Days		in Year[2000] is 366
	Number of Hours		in Year [2000] is 8784
	Number of Minutes	in Year [2000] is 527040
	Number of Seconds	in Year [2000] is 31622400
*/
/*
	Please enter a year to check? 1971
	Number of Days		in Year [1971] is 365
	Number of Hours		in Year [1971] is 8760
	Number of Minutes	in Year [1971] is 525600
	Number of Seconds	in Year [1971] is 31536000
*/
#include <iostream>
using namespace std;

// Function to read year input from user
int ReadYear() {
	int year;
	cout << "Please enter a year to check? ";
	cin >> year;
	return year;
}

// Function to check if a year is a leap year
bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to print number of days, hours, minutes, and seconds in a year
void PrintYearDetails(int year)
{
	int days = IsLeapYear(year) ? 366 : 365;
	int hours = days * 24;
	int minutes = hours * 60;
	int seconds = minutes * 60;
	cout << "Number of Days\t\tin Year [" << year << "] is " << days << "\n";
	cout << "Number of Hours\t\tin Year [" << year << "] is " << hours << "\n";
	cout << "Number of Minutes\tin Year [" << year << "] is " << minutes << "\n";
	cout << "Number of Seconds\tin Year [" << year << "] is " << seconds << "\n";
}

// Main function
int main()
{
	int year = ReadYear();
	PrintYearDetails(year);

	return 0;
}