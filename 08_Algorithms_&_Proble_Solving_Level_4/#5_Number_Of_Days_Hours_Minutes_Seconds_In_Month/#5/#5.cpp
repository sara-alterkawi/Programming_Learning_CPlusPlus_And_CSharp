// Write a program to print Number of:
/*
	• Days
	• Hours
	• Minutes
	• Seconds
	in a certain Month.
*/

/*
	Example: Input
	Please enter a year to check? 2000
	Please enter a Month to check? 2
	Number of Days		in Month [2] is 29
	Number of Hours		in Month [2] is 696
	Number of Minutes	in Month [2] is 41760
	Number of Seconds	in Month [2] is 2505600
*/

/*
	Please enter a year to check? 1971
	Please enter a Month to check? 2
	Number of Days		in Month [2] is 28
	Number of Hours		in Month [2] is 672
	Number of Minutes	in Month [2] is 40320
	Number of Seconds	in Month [2] is 2419200
*/

#include <iostream>
using namespace std;

// Function to read year input from user
int ReadYear()
{
	int year;
	cout << "Please enter a year to check? ";
	cin >> year;
	return year;
}

// Function to read month input from user
int ReadMonth()
{
	int month;
	cout << "Please enter a Month to check? ";
	cin >> month;
	return month;
}

// Function to check if a year is a leap year
bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get number of days in a month
int NumberOfDaysInAMonth(int month, int year) {
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		return IsLeapYear(year) ? 29 : 28;
	default:
		return 0; // Invalid month
	}
}

// Function to print number of days, hours, minutes, and seconds in a month
void PrintMonthDetails(int month, int year)
{
	int days = NumberOfDaysInAMonth(month, year);
	int hours = days * 24;
	int minutes = hours * 60;
	int seconds = minutes * 60;

	cout << "Number of Days\t\tin Year [" << month << "] is " << days << "\n";
	cout << "Number of Hours\t\tin Year [" << month << "] is " << hours << "\n";
	cout << "Number of Minutes\tin Year [" << month << "] is " << minutes << "\n";
	cout << "Number of Seconds\tin Year [" << month << "] is " << seconds << "\n";
}

// Main function
int main()
{
	int year = ReadYear();
	int month = ReadMonth();
	PrintMonthDetails(month, year);

	return 0;
}