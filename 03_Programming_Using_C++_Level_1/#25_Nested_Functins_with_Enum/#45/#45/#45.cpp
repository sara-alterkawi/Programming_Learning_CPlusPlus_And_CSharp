// Write a program to ask the user to select Month then print the month name
#include <iostream>
#include <string>
using namespace std;

// Enum for months
enum enMonth
	{
	January = 1, February, March, April, May, June,
	July, August, September, October, November, December
};

// Function to show months menu
void ShowMonthsMenu()
{
	cout << "***************************" << endl;
	cout << "Months of the Year" << endl;
	cout << "***************************" << endl;
	cout << "1. January" << endl;
	cout << "2. February" << endl;
	cout << "3. March" << endl;
	cout << "4. April" << endl;
	cout << "5. May" << endl;
	cout << "6. June" << endl;
	cout << "7. July" << endl;
	cout << "8. August" << endl;
	cout << "9. September" << endl;
	cout << "10. October" << endl;
	cout << "11. November" << endl;
	cout << "12. December" << endl;
	cout << "***************************" << endl;
	cout << "Please enter month number (1-12): ";
}

// Function to read month from user
enMonth ReadMonth()
{
	int Month;
	cin >> Month;
	return (enMonth)Month;
}

// Function to print month name based on month number
string GetMonthName(enMonth Month)
{
    switch (Month)
    {
    case January:
        return "January";
    case February:
        return "February";
    case March:
        return "March";
    case April:
        return "April";
    case May:
        return "May";
    case June:
        return "June";
    case July:
        return "July";
    case August:
        return "August";
    case September:
        return "September";
    case October:
        return "October";
    case November:
        return "November";
    case December:
        return "December";
    default:
        return "Invalid month number!";
    }
}

// Main function
int main()
{
	ShowMonthsMenu();
	cout << "Selected month is: " << GetMonthName(ReadMonth()) << endl;
	return 0;
}