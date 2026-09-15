// Write a program to ask the user to select Month then print the month name
#include <iostream>
#include <string>
using namespace std;

// Function to print month name based on month number
void PrintMonthName(int Month)
{
	switch (Month)
	{
	case 1:
		cout << "January" << endl;
		break;
	case 2:
		cout << "February" << endl;
		break;
	case 3:
		cout << "March" << endl;
		break;
	case 4:
		cout << "April" << endl;
		break;
	case 5:
		cout << "May" << endl;
		break;
	case 6:
		cout << "June" << endl;
		break;
	case 7:
		cout << "July" << endl;
		break;
	case 8:
		cout << "August" << endl;
		break;
	case 9:
		cout << "September" << endl;
		break;
	case 10:
		cout << "October" << endl;
		break;
	case 11:
		cout << "November" << endl;
		break;
	case 12:
		cout << "December" << endl;
		break;
	default:
		cout << "Invalid month number!" << endl;
		break;
	}
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