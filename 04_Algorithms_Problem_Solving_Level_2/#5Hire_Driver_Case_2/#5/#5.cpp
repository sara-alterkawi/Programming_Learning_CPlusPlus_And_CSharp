// Program to ask user to enter his/her age, driver license and has recommendation!
// then print Hired 
// if age is greater than or equal to 21 and has a driver license, otherwise print rejected
// or hire him\her without condition if he\she has recommendation.
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
struct stInfo
{
	int age;
	bool hasDrivingLicense;
	bool hasRecommendation;
};

// Function to read user info
stInfo readInfo()
{
	stInfo info;
	cout << "Please Enter your age: ";
	cin >> info.age;
	cout << "Do you have a driving license? (yes = 1 / no = 0): ";
	cin >> info.hasDrivingLicense;
	cout << "Do you have a recommendation? (yes = 1 / no = 0): ";
	cin >> info.hasRecommendation;
	return info;
}

// Function to validate user info
bool isValidInput(stInfo info)
{
	if (info.hasRecommendation)
		return true;
	else
		return (info.age > 21 && info.hasDrivingLicense);
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