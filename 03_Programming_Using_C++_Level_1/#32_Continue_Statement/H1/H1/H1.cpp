// Write a program to do the following:
// Read 5 numbers and sum them up as long as the number is below 50.
// Use for loop and continue statement.

#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
	int sum = 0;
	int number;
	for (int i = 0; i < 5; i++) {
		cout << "Enter number " << (i + 1) << ": ";
		cin >> number;
		if (number > 50) {
			cout << "Number is above 50, skipping..." << endl;
			continue; // Skip numbers 50 or above
		}
		sum += number; // Add to sum if below 50
	}
	cout << "The sum of numbers below 50 is: " << sum << endl;
	return 0;
}