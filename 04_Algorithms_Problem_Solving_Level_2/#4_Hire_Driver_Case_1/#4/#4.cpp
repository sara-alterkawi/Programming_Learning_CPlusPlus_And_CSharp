// Program to ask user to enter his/her age and driver license,
// then print Hired 
// if age is greater than or equal to 21 and has a driver license, otherwise print rejected.
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
struct stInfo
{
	int age;
	bool hasDrivingLicense;
};

// Function to read user info
stInfo readInfo()
{
	stInfo info;
	cout << "Please Enter your age: ";
	cin >> info.age;
	cout << "Do you have a driving license? (yes = 1 / no = 0): ";
	cin >> info.hasDrivingLicense;
	return info;
}

// Function to validate user info
bool isValidInput(stInfo info)
{
	return (info.age >= 21 && info.hasDrivingLicense);
}

// Function to print result
void printResult(stInfo info)
{
	if (isValidInput(info))
		cout << "Hired" << endl;
	else
		cout << "Rejected" << endl;
}

// Main function
int main()
{
	printResult(readInfo());
	return 0;
}