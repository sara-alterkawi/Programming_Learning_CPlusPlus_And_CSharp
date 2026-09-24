// Write a program to calculate the area of a circle inscribed in a square.
// Example input 10 Output 78.5398

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read Square length A
float readNumber()
{
	float A;
    cout << "Please enter Square length A: ";
    cin >> A;
	return A;
}

// Function to calculate Circle Area
float CircleArea(int A)
{
    return (M_PI * pow(A, 2)) / 4;;
}

// Function to print Circle area
void printArea(float Area)
{
	cout << "--------------------------" << endl;
    cout << "Circle Area = " << Area << endl;
	cout << "--------------------------" << endl;
}
int main()
{
	printArea(CircleArea(readNumber()));
    return 0;
}
