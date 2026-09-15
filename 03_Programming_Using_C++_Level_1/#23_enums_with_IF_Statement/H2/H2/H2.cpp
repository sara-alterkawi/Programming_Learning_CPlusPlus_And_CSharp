// Write a program to ask the user to choose country from a list of countries and print the chosen country name on the screen.
// The list of countries is: 
// 1 = Syria,
// 2 = Tunis,
// 3 = Algeria,
// 4 = Oman,
// 5 = Egypt,
// 6 = Jordan.
// Other values are invalid.

#include <iostream>
#include <string>
using namespace std;

// Enum to represent countries
enum enContryChoice
{
	Syria = 1,
	Tunis = 2,
	Algeria = 3,
	Oman = 4,
	Egypt = 5,
	Jordan = 6
};

// Function to print the chosen country name
void PrintCountryName(enContryChoice Country)
{
	if (Country == enContryChoice::Syria)
	{
		cout << "You have chosen Syria." << endl;
	}
	else if (Country == enContryChoice::Tunis)
	{
		cout << "You have chosen Tunis." << endl;
	}
	else if (Country == enContryChoice::Algeria)
	{
		cout << "You have chosen Algeria." << endl;
	}
	else if (Country == enContryChoice::Oman)
	{
		cout << "You have chosen Oman." << endl;
	}
	else if (Country == enContryChoice::Egypt)
	{
		cout << "You have chosen Egypt." << endl;
	}
	else if (Country == enContryChoice::Jordan)
	{
		cout << "You have chosen Jordan." << endl;
	}
	else
	{
		cout << "Invalid choice." << endl;
	}
}

// Function to display the menu
void ShowMenu()
{
	cout << "*********************************************************" << endl;
	cout << "Choose a country from the list below:" << endl;
	cout << "1. Syria" << endl;
	cout << "2. Tunis" << endl;
	cout << "3. Algeria" << endl;
	cout << "4. Oman" << endl;
	cout << "5. Egypt" << endl;
	cout << "6. Jordan" << endl;
	cout << "*********************************************************" << endl;
	cout << "Enter your choice (1-6): ";
	int Choice;
	cin >> Choice;
	PrintCountryName(static_cast<enContryChoice>(Choice));
	cout << "*********************************************************" << endl;
}

// Main function
int main()
{
	ShowMenu();
	return 0;
}
