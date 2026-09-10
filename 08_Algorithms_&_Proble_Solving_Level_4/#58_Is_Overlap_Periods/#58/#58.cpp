// Write a program to read Two Periods and check if they overlap or not?
/*
	Enter Period 1:
	----------------------------
	Enter Start Date:
	Please enter a Day? 1
	Please enter a Month? 2
	Please enter a Year? 2022
	****************************
	Enter End Date:
	----------------------------
	Please enter a Day? 10
	Please enter a Month? 2
	Please enter a Year? 2022
	****************************
	****************************
	Enter Period 2:
	----------------------------
	Enter Start Date:
	Please enter a Day? 5
	Please enter a Month? 2
	Please enter a Year? 2022
	****************************
	Enter End Date:
	----------------------------
	Please enter a Day? 15
	Please enter a Month? 2
	Please enter a Year? 2022
	****************************
	****************************
	Yes, Periods Overlap
*/

#pragma warning(disable : 4996)
#include <iostream>
#include <iomanip>
using namespace std;

// Struct to represent a date with year, month, and day components
struct sDate
{
	short Year;
	short Month;
	short Day;
};

// Struct to represent a time period defined by a StartDate and an EndDate.
struct sPeriod
{
	sDate StartDate;
	sDate EndDate;
};

// Enum to specify the comparison result when comparing two dates.
enum enDateCompare
{
	Before = -1,
	Equal = 0,
	After = 1
};

// Function to read day input from user
int ReadDay()
{
	int day;
	cout << "Please enter a day? ";
	cin >> day;
	return day;
}

// Function to read month input from user
int ReadMonth()
{
	int month;
	cout << "Please enter a month? ";
	cin >> month;
	return month;
}

// Function to read year input from user
int ReadYear()
{
	int year;
	cout << "Please enter a year? ";
	cin >> year;
	return year;
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

// Function to compare two dates
bool IsDate1BeforeDate2(sDate date1, sDate date2)
{
	return (date1.Year < date2.Year) ? true :
		((date1.Year == date2.Year) ? (date1.Month < date2.Month ? true :
			(date1.Month == date2.Month ? date1.Day < date2.Day : false)) : false);
}

// Function to compare two dates
bool IsDate1EqualDate2(sDate date1, sDate date2)
{
	return (date1.Year == date2.Year) ? ((date1.Month == date2.Month) ? ((date1.Day == date2.Day) ? true : false) : false) : false;
}

// Function to compare two dates
bool IsDate1AfterDate2(sDate date1, sDate date2)
{
	return (!IsDate1BeforeDate2(date1, date2) && !IsDate1EqualDate2(date1, date2));
}

// Function to compare two dates and return an enDateCompare enum value.
enDateCompare CompareDates(sDate date1, sDate date2)
{
	if (IsDate1BeforeDate2(date1, date2))
		return enDateCompare::Before;
	if (IsDate1EqualDate2(date1, date2))
		return enDateCompare::Equal;
	return enDateCompare::After;
}

// Function to check if two time periods (period1 and period2) overlap.
bool IsOverlapPeriods(sPeriod period1, sPeriod period2)
{
	if (CompareDates(period2.EndDate, period1.StartDate) == enDateCompare::Before
		|| CompareDates(period2.StartDate, period1.EndDate) == enDateCompare::After)
		return false;
	else
		return true;
}

// Function to read a full period (start date and end date) from the user.
sPeriod ReadPeriod()
{
	sPeriod period;
	cout << "Enter Start Date:\n";
	period.StartDate = ReadFullDate();
	cout << "****************************" << endl;

	cout << "Enter End Date:\n";
	period.EndDate = ReadFullDate();
	cout << "****************************" << endl;
	cout << "****************************" << endl;

	return period;
}

// Main function
int main()
{
	cout << "Enter Period 1:" << endl;
	cout << "----------------------------" << endl;
	sPeriod  period1 = ReadPeriod();

	cout << "Enter Period 2:" << endl;
	cout << "----------------------------" << endl;
	sPeriod  period2 = ReadPeriod();

	if (IsOverlapPeriods(period1, period2))
		cout << "Yes, Periods Overlap\n";
	else
		cout << "No, Periods do not Overlap\n";

	return 0;
}