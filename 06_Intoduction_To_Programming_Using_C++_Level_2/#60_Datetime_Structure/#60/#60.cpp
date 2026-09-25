// Datetime Structure
// This program will show you how to use the datetime structure in C++ programming language.
// The datetime structure is defined in the <ctime> header file. The datetime structure is used to store the date and time information.

#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

//int tm_seconds; //seconds of minutes from 0 to 61.
//int tm_minutes; //miunutes of hour from 0 to 59.
//int tm_hours;  //hours of day from 0 to 24.
//int tm_mday;  //day of month from 1 to 31.
//int tm_mon;   // month of year from 0 to 11.
//int tm_year;  // year since 1900.
//int tm_wday;  // days since sunday.
//int tm_yday;  // days since 1st january.
//int tm_isdst; // hours of daylight saving time.

int main()
{
	time_t t = time(0); //get time now.

	tm* nowHere = localtime(&t);

	// tm_year starts from 1900 so you need to add int number  1900 to it to get your specific date year.
	cout << "Year    : " << nowHere->tm_year + 1900 << endl;

	// tm_mon starts from 0 to 11 so you need to add 1 to it to get your specific month date.
	cout << "Month   : " << nowHere->tm_mon + 1 << endl;

	// tm_mday will calculate the day of the month correctly.
	cout << "Day     : " << nowHere->tm_mday << endl;

	// tm_hour will give you the hour time correctly.
	cout << "Hour    : " << nowHere->tm_hour << endl;

	// tm_min will give you minutes specific time.
	cout << "Minutes : " << nowHere->tm_min << endl;

	// tm_min will give you the specific seconds time.
	cout << "Seconds : " << nowHere->tm_sec << endl;

	// tm_min will give you the week day number in order since sunday.
	cout << "\nWeek Day (Days since Sunday)      : " << nowHere->tm_wday << endl;

	// tm_day will give you the day of the year since the first of January.
	cout << "Year Day (Days since 1st January) : " << nowHere->tm_yday << endl;

	// tm_isdst will give you the saving time of hours daylight depends on your country time.
	cout << "Hours of daylight saving time     : " << nowHere->tm_isdst << endl;

	return 0;
}