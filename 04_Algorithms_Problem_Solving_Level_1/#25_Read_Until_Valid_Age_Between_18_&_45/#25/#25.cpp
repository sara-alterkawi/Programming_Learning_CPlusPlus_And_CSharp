// Write a program to ask the user to enter Age if age is between 18 and 45 then print "Eligible for job" otherwise print "Not eligible for job"
// and don't let user leave withput right input.

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

int readUntilAgeBetween(int From, int To)
{
	int age;
	do
	{
		age = readAge();
	} while (!validateNumberInRange(age, From, To));
	return age;
}

// Function to print the result
void printResult(int age)
{
	cout << "Your Age is: " << age << endl;
}

// Main function
int main()
{
	printResult(readUntilAgeBetween(18, 45));
	return 0;
}