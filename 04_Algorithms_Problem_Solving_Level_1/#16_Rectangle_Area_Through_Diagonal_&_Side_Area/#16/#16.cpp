// Rectangle Area through Diagonal and Side Area.
// Example input 5, 40 Output 198.431

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to read two integers from user input
void readNumbers(int& A, int& D)
{
    cout << "Please enter rectangle Side: ";
    cin >> A;
    cout << "Please enter rectangle Diagonal: ";
    cin >> D;
}

// Function to calculate rectangle area
float RectangleArea(float A, float D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));
    return Area;
}

// Function to print rectangle area
void printRectangleArea(float A, float D)
{
    cout << "--------------------------" << endl;
    cout << "Rectangle Area = " << RectangleArea(A, D) << endl;
    cout << "--------------------------" << endl;
}

// Main function
int main()
{
    int A, D;
    readNumbers(A, D);
    printRectangleArea(A, D);
    return 0;
}
