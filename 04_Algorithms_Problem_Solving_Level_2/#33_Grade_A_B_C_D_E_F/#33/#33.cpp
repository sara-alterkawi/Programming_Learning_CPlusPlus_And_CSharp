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

// Function to ask the user for their grade
int readGrade(int From, int To)
{
	int grade;
	do {
		cout << "Enter your grade between " << From << " and " << To << endl;
		cin >> grade;
	} while (grade < From || grade > To);
	return grade;
}

// Function to print the grade based on the input score
char getGrade(int grade)
{
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}

void printResult(int grade)
{
	cout << "Result = " << getGrade(grade) << endl;
}


// Main function
int main()
{
	printResult(readGrade(0, 100));
	return 0;
}