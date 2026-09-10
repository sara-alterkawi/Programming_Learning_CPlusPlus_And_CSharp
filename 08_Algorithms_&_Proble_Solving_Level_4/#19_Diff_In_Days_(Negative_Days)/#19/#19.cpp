// Write a program to read a Datel, Date2 and make a function to calculate the difference in days.
// Note: if date2 is less than datel print the results in Minus
/*
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2022

	Diffrence is: 8036 Days).
	Diffrence (Including End Day) is: 8037 Days).
*/

/*
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2022

	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Diffrence is: -8036 Day(s).
	Diffrence (Including End Day) is: -8037 Day (s).
*/

#include <iostream>
using namespace std;

// Struct to represent a date with year, month, and day components
struct sDate
{
	short Year;
	short Month;
	short Day;
};

// Function to read year input from user
int ReadYear()
{
	int year;
	cout << "Please enter a year? ";
	cin >> year;
	return year;
}

// Function to read month input from user
int ReadMonth()
{
	int month;
	cout << "Please enter a month? ";
	cin >> month;
	return month;
}

// Function to read day input from user
int ReadDay()
{
	int day;
	cout << "Please enter a day? ";
	cin >> day;
	return day;
}

// Function to read a full date (day, month, year) from the user
sDate ReadFullDate()
{
	sDate date;
	date.Day = ReadDay();
	date.Month = ReadMonth();
	date.Year = ReadYear();
	return date;
}

// Function to check if a year is a leap year
bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to compare two dates
bool IsDate1BeforeDate2(sDate date1, sDate date2)
{
	return (date1.Year < date2.Year) ? true :
		((date1.Year == date2.Year) ? (date1.Month < date2.Month ? true :
			(date1.Month == date2.Month ? date1.Day < date2.Day : false)) : false);
}

// Function to get number of days in a month
int NumberOfDaysInAMonth(int month, int year)
{
	if (month < 1 || month > 12)
		return  0;
	int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumberOfDays[month - 1];
}

// Function to see if the day is the Last day in month
bool IsLastDayInMonth(sDate date)
{
	return (date.Day == NumberOfDaysInAMonth(date.Month, date.Year));
}

// Function to see if the month is the Last month in year
bool IsLastMonthInYear(int month)
{
	return (month == 12);
}

// Function to increase date one day
sDate IncreaseDateByOneDay(sDate date)
{
	if (IsLastDayInMonth(date))
	{
		if (IsLastMonthInYear(date.Month))
		{
			date.Month = 1;
			date.Day = 1;
			date.Year++;
		} else {
			date.Day = 1;
			date.Month++;
		}
	} else {
		date.Day++;
	}
	return date;
}

// Function to swap date1 with date2
void  SwapDates(sDate& date1, sDate& date2)
{
	sDate tempDate;
	tempDate.Year = date1.Year;
	tempDate.Month = date1.Month;
	tempDate.Day = date1.Day;
	date1.Year = date2.Year;
	date1.Month = date2.Month;
	date1.Day = date2.Day;
	date2.Year = tempDate.Year;
	date2.Month = tempDate.Month;
	date2.Day = tempDate.Day;
}

// Function to get the diffenrance between two dates
int GetDifferenceInDays(sDate date1, sDate date2, bool includeEndDay = false)
{
	int days = 0;
	short sawpFlagValue = 1;

	if (!IsDate1BeforeDate2(date1, date2))
	{
		//Swap Dates
		SwapDates(date1, date2);
		sawpFlagValue = -1;
	}

	while (IsDate1BeforeDate2(date1, date2))
	{
		days++;
		date1 = IncreaseDateByOneDay(date1);
	}
	return includeEndDay ? ++days * sawpFlagValue : days * sawpFlagValue;
}

// Main function
int main()
{
	sDate date1 = ReadFullDate();
	cout << endl;
	sDate date2 = ReadFullDate();

	cout << "\nDiffrence is: " << GetDifferenceInDays(date1, date2) << " Day(s)." << endl;
	cout << "\nDiffrence (Including End Day) is: " << GetDifferenceInDays(date1, date2, true) << " Day(s)." << endl;

	return 0;
}