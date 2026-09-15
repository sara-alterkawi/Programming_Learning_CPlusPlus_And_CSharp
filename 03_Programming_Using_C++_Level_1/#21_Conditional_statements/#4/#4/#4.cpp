// Program to ask user to enter his/her age and driver license, then print Hired if age is greater than or equal to 21 and has a driver license, otherwise print rejected.
#include <iostream>
#include <string>
using namespace std;

// Function to check eligibility
void checkEligibility(int age, string hasDriverLicense) {
	if (age >= 21 && hasDriverLicense == "yes") {
		cout << "Hired" << endl;
	}
	else {
		cout << "Rejected" << endl;
	}
}

// Function to get user input
void getUserInput() {
	int age;
	string hasDriverLicense;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Do you have a driver license? (yes/no): ";
	cin >> hasDriverLicense;
	checkEligibility(age, hasDriverLicense);
}

// Main function
int main()
{
	getUserInput();
	return 0;
}