// Write a program to calculate the area of a triangle given its base and height.

#include <iostream>
#include <string>
using namespace std;

// Function to read two integers from user input
void readNumbers(int& B, int& H)
{
    cout << "Please enter the base (B) of the triangle: ";
    cin >> B;
    cout << "Please enter the height (H) of the triangle: ";
	cin >> H;    
}

// Function to calculate triangle area
float calculateArea(float B, float H)
{
    return (B * H) / 2;
}

// Function to print triangle area
void printTriangleArea(float B, float H)
{
	cout << "-------------------------------" << endl;
	cout << "The area of the triangle with base " << B << " and height " << H << " is: " << calculateArea(B, H) << endl;
	cout << "-------------------------------" << endl;
}

int main()
{
	int B, H;
	readNumbers(B, H);
	printTriangleArea(B, H);
    return 0;
}
