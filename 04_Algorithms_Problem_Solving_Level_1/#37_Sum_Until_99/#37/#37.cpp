// Write a program to read numbers from user and sum them, keep reading until user enters 99 then print the sum.

#include <iostream>
#include <string>
using namespace std;

// Function to read a number from the user
double readNumber()
{
    double Numb;
    cout << "Enter numbers to sum (enter 99 to stop): " << endl;
    cin >> Numb;
    return Numb;
}

// Function to sum numbers until user enters 99
double sumNumbers()
{
    double sum = 0;
    double number = 0;
    while (true)
    {
        number = readNumber();
        if (number == 99)
            break;
        sum += number;
    }
    return sum;
}

// Function to print the result
void printResult(int result)
{
    cout << "Result = " << result << endl;
}


// Main function
int main()
{
    printResult(sumNumbers());
	return 0;
}
