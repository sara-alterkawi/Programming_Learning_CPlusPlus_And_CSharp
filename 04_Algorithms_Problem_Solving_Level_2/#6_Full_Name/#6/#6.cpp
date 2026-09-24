// Write a program to ask the user to enter First Name and Last Name separately and then display the full name in one line.

#include <iostream>
#include <string>
using namespace std;

// Define a structure to hold the first and last names
struct stName
{
	string firstName;
	string lastName;
};

// Function to read the first and last names from the user
stName readName()
{
	stName name;
	cout << "Please Enter Your First Name: ";
	getline(cin, name.firstName);
	cout << "Please Enter Your Last Name: ";
	getline(cin, name.lastName);
	return name;
}

// Function to concatenate first and last names
string getFullName(stName name)
{
	return name.firstName + " " + name.lastName;
}

string getFullNameReversed(stName name, bool reversed)
{
	if (reversed)
		return name.lastName + " " + name.firstName;
	else
		return name.firstName + " " + name.lastName;
}

// Function to print the full name
void printFullName(stName fullName)
{
	cout << "----------------------------------" << endl;
	cout << "Your Full Name is: " << getFullName(fullName) << endl;
	cout << "----------------------------------" << endl;
	cout << "Your Full Name is: " << getFullNameReversed(fullName, true) << endl;
}

// Main function
int main()
{
	printFullName(readName());
	return 0;
}