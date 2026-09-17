// Write a program to ask the userr to enter Mark1, Mark2 and Mark3. Then calculate the average of these three marks and print PASS if average is greater than or equal to 50, otherwise print FAIL.

#include <iostream>
#include <string>
using namespace std;

// Define a struct to hold three numbers
struct stMarks
{
    int mark1;
    int mark2;
    int mark3;
};
// Function prototypes
stMarks ReadMarks()
{
    stMarks marks;
    cout << "Please enter your first mark: ";
    cin >> marks.mark1;
    cout << "Please enter your second mark: ";
    cin >> marks.mark2;
    cout << "Please enter your third mark: ";
    cin >> marks.mark3;
    return marks;
}

// Function to calculate the sum of three numbers
int sumMarks(stMarks marks)
{
    return marks.mark1 + marks.mark2 + marks.mark3;
}

// Function to calculate the average of three numbers
float avgMarks(stMarks marks)
{
    return (float)sumMarks(marks) / 3;
}

// function to check pass or fail
bool  checkPassFail(stMarks marks)
{
	return avgMarks(marks) >= 50;
}

// Function to print the avg
void PrintResult(stMarks marks)
{
	cout << "-----------------------------------" << endl;
    cout << "The sum of the three marks is: " << sumMarks(marks) << endl;
    cout << "The average of the three marks is: " << avgMarks(marks) << endl;

    if (checkPassFail(marks))
        cout << "You have PASSED" << endl;
    else
        cout << "You have FAILED" << endl;

    cout << "-----------------------------------" << endl;
}

// Main function
int main()
{
    PrintResult(ReadMarks());
    return 0;
}