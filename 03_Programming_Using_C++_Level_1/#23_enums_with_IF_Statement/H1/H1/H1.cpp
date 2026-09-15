// Write a program to ask the user to choose favorite color from a list of colors and change the background color of the console accordingly.
// 1 = Red
// 2 = Green
// 3 = Blue
// 4 = Yellow

#include <iostream>
#include <string>
using namespace std;

enum enSceenColor
{
	Red = 1,
	Green = 2,
	Blue = 3,
	Yellow = 4
};

void ChangeBackgroundColor(enSceenColor Color)
{
	if (Color == enSceenColor::Red)
	{
		system("Color 4F");
		cout << "You chose Red color." << endl;
	}
	else if (Color == enSceenColor::Green)
	{
		system("Color 2F");
		cout << "You chose Green color." << endl;
	}
	else if (Color == enSceenColor::Blue)
	{
		system("Color 1F");
		cout << "You chose Blue color." << endl;
	}
	else if (Color == enSceenColor::Yellow)
	{
		system("Color 6F");
		cout << "You chose Yellow color." << endl;
	}
	else
	{
		cout << "Invalid color choice." << endl;
	}
}

void ShowMenu()
{
	cout << "*********************************************************" << endl;
	cout << "Choose your favorite color from the list below:" << endl;
	cout << "1. Red" << endl;
	cout << "2. Green" << endl;
	cout << "3. Blue" << endl;
	cout << "4. Yellow" << endl;
	cout << "*********************************************************" << endl;
	cout << "Enter the number corresponding to your favorite color: ";
	int userColor;
	enSceenColor Color;
	cin >> userColor;
	ChangeBackgroundColor(static_cast<enSceenColor>(userColor));
}

// Main function
int main()
{
	ShowMenu();
    return 0;
}
