// Write a program that takes three numbers as input and outputs their sum, Use struct and functions.

#include <iostream>
#include <string>
using namespace std;

// Define a struct to hold three numbers
struct stNumbers
{
    int Num1;
    int Num2;
    int Num3;
};

// Function prototypes
stNumbers ReadNumbers()
{
    stNumbers numbers;
    cout << "Please enter your first number: ";
    cin >> numbers.Num1;
    cout << "Please enter your second number: ";
    cin >> numbers.Num2;
    cout << "Please enter your third number: ";
    cin >> numbers.Num3;
    return numbers;
}

// Function to calculate the sum of three numbers
int sumNumbers(stNumbers numbers)
{
    return numbers.Num1 + numbers.Num2 + numbers.Num3;
}

// Function to print the result
void PrintResult(stNumbers numbers)
{
    cout << "The sum of the three numbers is: " << sumNumbers(numbers) << endl;
}

// Main function
int main()
{
    PrintResult(ReadNumbers());
    return 0;
}
