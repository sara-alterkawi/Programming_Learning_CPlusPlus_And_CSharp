// write a program that does the following:
// Swap Numbers.

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
void readNumbers(int& num1, int& num2)
{
    cout << "Please Enter number 1: ";
    cin >> num1;
    cout << "Please Enter number 2: ";
    cin >> num2;
}

// Function to swap two numbers
void swapNumbers(int& num1, int& num2)
{
    int Temp = num1;
    num1 = num2;
    num2 = Temp;
}

// Function to print numbers before and after swapping
void printNumbersBefore(int num1, int num2)
{
    cout << "--------------------------" << endl;
    cout << "You entered: " << num1 << " , " << num2 << endl;
}

// Function to print numbers after swapping
void printNumbersAfter(int num1, int num2)
{
    cout << "After swapping: " << num1 << " , " << num2 << endl;
    cout << "--------------------------" << endl;
}

// Main Function
int main()
{
	int Num1, Num2;
	readNumbers(Num1, Num2);
    printNumbersBefore(Num1, Num2);
    swapNumbers(Num1, Num2);
	printNumbersAfter(Num1, Num2);
    return 0;
}
