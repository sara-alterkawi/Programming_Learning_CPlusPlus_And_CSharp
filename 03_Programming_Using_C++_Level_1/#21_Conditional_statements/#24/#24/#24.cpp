// Write a program to ask the user to enter Age if age is between 18 and 45 then print "Eligible for job" otherwise print "Not eligible for job".

#include <iostream>
#include <string>
using namespace std;

// Function to check eligibility
void checkEligibility(int age)
{
	if (age >= 18 && age <= 45)
	{
		cout << "Eligible for job" << endl;
	}
	else
	{
		cout << "Not eligible for job" << endl;
	}
}

// Function to get user input
void getUserInput()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	checkEligibility(age);
}

// Main function
int main()
{
	getUserInput();
	return 0;
}