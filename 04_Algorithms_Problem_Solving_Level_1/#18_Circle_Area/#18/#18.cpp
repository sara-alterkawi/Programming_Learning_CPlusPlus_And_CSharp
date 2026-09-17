// Write a program to do the following:
// Calculate the area of a circle given its radius.
// Example input 5 Output 78.5398

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read Circle radius R
void readNumbers(int& R)
{
    cout << "Please enter Circle radius R" << endl;
	cin >> R;
}

// Function to calculate Circle Area
float CircleArea(int R)
{
    float Area = M_PI * pow(R, 2);

    return Area;
}

// Function to print Circle area
void printTriangleArea(float R)
{
	cout << "_________________________________" << endl;
    cout << endl << "Circle Area = " << CircleArea(R) << endl;
	cout << "_________________________________" << endl;
}

int main()
{
    int R;
	readNumbers(R);
	printTriangleArea(R);
    return 0;
}
