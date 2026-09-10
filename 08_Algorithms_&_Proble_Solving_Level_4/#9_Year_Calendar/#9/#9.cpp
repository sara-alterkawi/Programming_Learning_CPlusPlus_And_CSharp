// Write a program to print Year Calendar.
/*
	Example:
	Please enter a year? 1981

	  _________________________________

			   Calendar - 1981
	  _________________________________

	  _______________Jan_______________

	  Sun  Mon  Tue  Wed  Thu  Fri  Sat
							1    2    3
		4    5    6    7    8    9   10
	   11   12   13   14   15   16   17
	   18   19   20   21   22   23   24
	   25   26   27   28   29   30   31

	  _________________________________

	  _______________Feb_______________

	  Sun  Mon  Tue  Wed  Thu  Fri  Sat
		1    2    3    4    5    6    7
		8    9   10   11   12   13   14
	   15   16   17   18   19   20   21
	   22   23   24   25   26   27   28

	  _________________________________
	  ...

*/

#include <iostream>
using namespace std;

// Function to read year input from user
int ReadYear()
{
	int year;
	cout << "Please enter a year? ";
	cin >> year;
	return year;
}

// Function to check if a year is a leap year
bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get number of days in a month
int NumberOfDaysInAMonth(int month, int year)
{
	if (month < 1 || month > 12)
		return  0;
	int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumberOfDays[month - 1];
}

// Function to calculate day of the week
int DayOfWeekOrder(int day, int month, int year)
{
	int a, y, m;
	a = (14 - month) / 12;
	y = year - a;
	m = month + (12 * a) - 2; // Gregorian://0:sun, 1:Mon, 2:Tue...etc
	return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

// Function to get day name from day order
string DayShortName(int dayOrder)
{
	string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[dayOrder];
}

// Function to get month name from month number
string MonthShortName(int monthNumber)
{
	string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	return (Months[monthNumber - 1]);
}

// Function to print month calendar
void PrintMonthCalendar(int month, int year)
{
	int numberOfDays;

	// Index of the day from 0 to 6
	int current = DayOfWeekOrder(1, month, year);
	numberOfDays = NumberOfDaysInAMonth(month, year);

	// Print the current month name
	printf("\n  _______________%s_______________\n\n",
		MonthShortName(month).c_str());

	// Print the columns
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	// Print appropriate spaces
	int i;
	for (i = 0; i < current; i++)
		printf("     ");
	for (int j = 1; j <= numberOfDays; j++)
	{
		printf("%5d", j);
		if (++i == 7)
		{
			i = 0;
			printf("\n");
		}
	}
	printf("\n  _________________________________\n");
}

// Function to print year calendar
void PrintYearCalendar(int year)
{
	printf("\n  _________________________________\n\n");
	printf("           Calendar - %d\n", year);
	printf("  _________________________________\n");

	for (int i = 1; i <= 12; i++)
	{
		PrintMonthCalendar(i, year);
	}
	return;
}

// Main function
int main()
{
	PrintYearCalendar(ReadYear());

	return 0;
}