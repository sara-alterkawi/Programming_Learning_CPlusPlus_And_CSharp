// Write a program to ask the user to enter Grade then print the grade as follows:
// A for 90-100
// B for 80-89
// C for 70-79
// D for 60-69
// E for 50-59
// F for less than 50

#include <iostream>
#include <string>
using namespace std;

// Function to print the grade based on the input score
void printGrade(int grade)
{
	if (grade >= 90 && grade <= 100)
		cout << "A" << endl;
	else if (grade >= 80 && grade < 90)
		cout << "B" << endl;
	else if (grade >= 70 && grade < 80)
		cout << "C" << endl;
	else if (grade >= 60 && grade < 70)
		cout << "D" << endl;
	else if (grade >= 50 && grade < 60)
		cout << "E" << endl;
	else if (grade < 50)
		cout << "F" << endl;
	else
		cout << "Invalid grade" << endl;
}

// Function to ask the user for their grade
void askUserForGrade()
{
	int grade;
	cout << "Enter your grade: ";
	cin >> grade;
	printGrade(grade);
}

// Main function
int main()
{
	askUserForGrade();
	return 0;
}