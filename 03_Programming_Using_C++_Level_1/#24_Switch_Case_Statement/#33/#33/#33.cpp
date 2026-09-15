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
	switch (grade / 10)
	{
	case 10:
		cout << "A" << endl;
		break;
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	case 5:
		cout << "E" << endl;
		break;
	default:
		cout << "F" << endl;
		break;
	}
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