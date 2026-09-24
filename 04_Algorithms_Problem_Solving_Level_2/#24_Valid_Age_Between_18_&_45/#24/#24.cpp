// Write a program to ask the user to enter Age if age is between 18 and 45 then print "Eligible for job" otherwise print "Not eligible for job".

#include <iostream>
#include <string>
using namespace std;

// Function to read user Age
int readAge()
{
	int age;
	cout << "Please Enter your age between 18 and 45: ";
	cin >> age;
	return age;
}

// Function to check age validity
bool validateNumberInRange(int Numb, int From, int To)
{
	return (Numb >= From && Numb <= To);
}

// Function to print the result
void printResult(int age)
{
	if (validateNumberInRange(age, 18, 45))
		cout << age << " is Eligible for job" << endl;
	else
		cout << age << " is Not eligible for job" << endl;
}

// Main function
int main()
{
	printResult(readAge());
	return 0;
}