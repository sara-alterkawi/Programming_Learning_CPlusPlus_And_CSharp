// Write a program to check if year is a leap year or not.
/* 
Note:
All years which are perfectly
divisible by 4 are leap years
except for century years(years
	ending with 00), which are leap
	years only if they are perfectly
	divisible by 400.
*/
/*
	Example: 1996 is a leap year, 1900 is not a leap year, 2000 is a leap year.
	Leap Year		Not Leap Year
	1968				1971
	2004				2006
	2012				2010
	1200				1700
	1600				1800
	2000				1900
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

// Function to check if a year is a leap year
bool IsLeapYear(int year)
{
	// Leap year if divisible by 400
	if (year % 400 == 0)
		return true;
	else {
		// Not a leap year if divisible by 100
		if (year % 100 == 0)
			return false;
		else {
			// Leap year if divisible by 4
			if (year % 4 == 0)
				return true;
			else
				return false;
		}
	}
}


// Main function
int main()
{
	int year = ReadYear();

	if (IsLeapYear(year))
		cout << "\nYes, Year [" << year << "] is a leap year.\n";
	else
		cout << "\nNo, Year [" << year << "] is NOT a leap year.\n";

	return 0;
}