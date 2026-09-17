// Ciecle Area Inscribed in an Isoscales Triangle.
// Example input 20, 10 Output 47.1239

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read the Isoscales Triangle
void readTriangleData(float& A, float& B)
{
    int A, B;
    cout << "Please enter the length of the equal sides A" << endl;
    cin >> A;
    cout << "Please enter the length of the base" << endl;
    cin >> B;
}

// Function to calculate Circle Area
float CircleAreaByIsoscalesTriangle(int A, int B)
{
    return (M_PI * pow(B, 2) / 4.0) * ((2.0 * A - B) / (2.0 * A + B));
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
    float A, B;
    readTriangleData(A, B);
    printResult(CircleAreaByIsoscalesTriangle(A, B));
    return 0;
}
