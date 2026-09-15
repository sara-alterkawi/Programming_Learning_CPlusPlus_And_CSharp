// Write a program to ask the user to enter Day then print the name of the day
// 1 for Sunday,
// 2 for Monday,
// 3 for Tuesday,
// 4 for Wednesday,
// 5 for Thursday,
// 6 for Friday,
// 7 for Saturday
// otherwise print Invalid Day

#include <iostream>
#include <string>
using namespace std;

// Function to print the name of the day based on the number
void PrintDayName(int Day)
{
	switch (Day)
	{
		case 1:
			cout << "Sunday" << endl;
			break;
		case 2:
			cout << "Monday" << endl;
			break;
		case 3:
			cout << "Tuesday" << endl;
			break;
		case 4:
			cout << "Wednesday" << endl;
			break;
		case 5:
			cout << "Thursday" << endl;
			break;
		case 6:
			cout << "Friday" << endl;
			break;
		case 7:
			cout << "Saturday" << endl;
			break;
		default:
			cout << "Invalid Day" << endl;
			break;
	}
}

// Function to read the day number from the user
void ReadDayNumber(int& Day)
{
	cout << "Please enter day number: ";
	cin >> Day;
}

// Main function
int main()
{
	int Day = 0;
	ReadDayNumber(Day);
	PrintDayName(Day);
	return 0;
}