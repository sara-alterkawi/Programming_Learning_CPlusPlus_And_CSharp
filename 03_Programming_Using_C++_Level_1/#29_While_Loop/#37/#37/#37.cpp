// Write a program to read numbers from user and sum them, keep reading until user enters 99 then print the sum.

#include <iostream>
#include <string>
using namespace std;

// Function to read numbers and sum them until 99 is entered
int sum_until_99()
{
    int sum = 0;
    int number;
    cout << "Enter numbers to sum (enter 99 to stop): " << endl;
    while (true)
    {
        cin >> number;
        if (number == 99)
            break;
        sum += number;
    }
    cout << "The sum is: " << sum << endl;
    return sum;
}

// Function to read user input and call the sum function
void ReadeUserInput()
{
    sum_until_99();
}

// Main function
int main()
{
    ReadeUserInput();
	return 0;
}
