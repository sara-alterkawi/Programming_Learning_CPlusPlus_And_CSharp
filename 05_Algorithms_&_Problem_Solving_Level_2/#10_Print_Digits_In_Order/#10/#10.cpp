// Write a program to read a number from user and print it in order from left to right.
// Ex: Input 1234, 
// output
// 1
// 2
// 3
// 4

#include <iostream>  
#include <string>
using namespace std;

// Function: ReadPositiveNumber
string ReadPositiveNumber(string Message)
{
    string number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number[0] == '-' || number == "0");

    return number;
}

// Function: PrintDigits
void PrintDigits(string number)
{
    for (char digit : number)
    {
        cout << digit << endl;
    }
}

// Main function: Entry point of the program.
int main()
{
    PrintDigits(ReadPositiveNumber("Enter a positive number: "));
    return 0;
}