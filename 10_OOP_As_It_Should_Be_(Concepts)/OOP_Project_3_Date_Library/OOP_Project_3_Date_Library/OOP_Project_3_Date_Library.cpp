// Date Library
// This project is intended to create a Date Library with the following requirements:
// 1. Create a class named clsDate.
// 2. The class should have private data members to store day, month, and year.
// 3. Default constructor that initializes the object with the current system date.
// 4. Parameterized constructor that accepts a date in "dd/mm/yyyy" string format.
// 5. Parameterized constructor that accepts day, month, and year as integers.
// 6. Parameterized constructor that accepts day order in year and year.
// 7. Ability to check if a given year is a leap year.
// 8. Ability to check if a given date is valid.
// 9. Ability to convert a date to string format.
// 10. Ability to print the month calendar for a given date.
// 11. Ability to print the year calendar for a given date.
// 12. Ability to add a specified number of days to the current date.
// 13. Ability to compare two dates (before, after, equal).
// 14. Ability to calculate the difference in days between two dates.
// 15. Ability to determine the day of the week for a given date.
// 16. Ability to increase and decrease the date by days, weeks, months, and years.
#include <iostream>
#include "clsDate.h"
using namespace std;
int main()
{
	clsDate Date1;
	Date1.Print();
	cout << "------------------------------------------------" << endl;

	clsDate Date2("31/1/2022");
	Date2.Print();
	cout << "------------------------------------------------" << endl;

	clsDate Date3(20, 12, 2022);
	Date3.Print();
	cout << "------------------------------------------------" << endl;

	clsDate Date4(250, 2022);
	Date4.Print();
	cout << "------------------------------------------------" << endl;

	Date1.IncreaseDateByOneMonth();
	Date1.Print();
	cout << "------------------------------------------------" << endl;

	//Date3.PrintYearCalendar();
	//cout << Date2.IsValid() << endl;
	/*cout << "My Age InDays:" <<
	clsDate::CalculateMyAgeInDays( clsDate(6, 11, 1977) );*/
	//You can try any method at your own..
	system("pause>0");
	return 0;
};