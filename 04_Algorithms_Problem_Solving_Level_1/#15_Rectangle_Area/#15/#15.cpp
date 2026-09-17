// Write a program that calculates the area of a rectangle given its length and width as input.

#include <iostream>
#include <string>
using namespace std;

// Function to read two integers from user input
void readNumbers(int& length, int& width)
{
    cout << "Please enter rectangle length: ";
    cin >> length;
    cout << "Please enter rectangle width: ";
    cin >> width;
}

// Function to calculate rectangle area
int RectangleArea(int length, int width)
{
    return length * width;
}

// Function to print rectangle area
void printRectangleArea(int length, int width)
{
    cout << "--------------------------" << endl;
    cout << "Rectangle Area = " << RectangleArea(length, width) << endl;
    cout << "--------------------------" << endl;
}

int main()
{
	int A, B;
	readNumbers(A, B);
	printRectangleArea(A, B);
	return 0;
}
