// Write a program using array, structure and functions for N persons to hold personal information (FirstName, LastName, Age, Phone).
#include <iostream>
#include <string>
using namespace std;

// Define a structure to hold personal information
struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

// Function to read personal information from user input
void ReadInfo(strInfo& Info)
{
	cout << "Please enter FirstName?\n";
	cin >> Info.FirstName;
	cout << "Please enter LastName?\n";
	cin >> Info.LastName;
	cout << "Please enter Age?\n";
	cin >> Info.Age;
	cout << "Please enter Phone?\n";
	cin >> Info.Phone;
	cout << "\n\n";
}

// Function to print personal information
void PrintInfo(strInfo Info)
{
	cout << "\n**********************************\n";
	cout << "FirstName: " << Info.FirstName << endl;
	cout << "LastName: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.Phone << endl;
	cout << "**********************************\n\n";
}

// Function to read multiple persons' information and store it in an array
void ReadPersonsInfo(strInfo Persons[100], int& NumberOfPersons)
{
	cout << "How many persons?\n";
	cin >> NumberOfPersons;
	for (int i = 0; i <= NumberOfPersons - 1; i++)
	{
		cout << "Please Enter Person's " << i + 1 << " Info: \n";
		ReadInfo(Persons[i]);
	}
}

// Function to print multiple persons' information from an array
void PrintPersonsInfo(strInfo Persons[100], int NumberOfPersons)
{
	for (int i = 0; i <= NumberOfPersons - 1; i++)
	{
		cout << "Person's " << i + 1 << " Info: \n";
		PrintInfo(Persons[i]);
	}
}

// Main function
int main()
{
	strInfo Persons[100];
	int NumberOfPersons = 1;
	ReadPersonsInfo(Persons, NumberOfPersons);
	PrintPersonsInfo(Persons, NumberOfPersons);
	return 0;
}
