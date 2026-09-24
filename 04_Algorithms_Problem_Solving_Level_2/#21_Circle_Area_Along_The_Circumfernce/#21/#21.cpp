// Ciecle Area Along the Circumference.
// Example input 20 Output 31.831

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read the Circumference
float readCircumference()
{
    float  L;
    cout << "Please enter Square Circumference L" << endl;
    cin >> L;
    return L;
}

// Function to calculate Circle Area
float CircleAreaByCircumference(int L)
{
    return pow(L, 2) / (4 * M_PI);
}

// Function to print Circle area
void printResult(float Area)
{
    cout << "--------------------------" << endl;
    cout << "Circle Area = " << Area << endl;
    cout << "--------------------------" << endl;
}

int main()
{
    printResult(CircleAreaByCircumference(readCircumference()));
    return 0;
}
