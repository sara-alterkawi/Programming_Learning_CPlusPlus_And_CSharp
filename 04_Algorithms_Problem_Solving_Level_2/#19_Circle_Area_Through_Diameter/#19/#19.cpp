// Write a program to calculate
// Ciecle Area through diameter.
// Example input 10 Output 78.5398

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read Circle diameter D
void readNumbers(int& D)
{
    cout << "Please enter Ciecle Diameter D" << endl;
    cin >> D;
}

// Function to calculate Circle Area
float CircleArea(int D)
{
    float Area = M_PI * pow(D, 2) / 4;

    return Area;
}

// Function to print Circle area
void printArea(float Area)
{
	cout << "--------------------------" << endl;
    cout << endl << "Ciecle Area = " << Area << endl;
	cout << "--------------------------" << endl;
}

// Main Function
int main()
{
    int D;
	readNumbers(D);
	printArea(CircleArea(D));
    return 0;
}
