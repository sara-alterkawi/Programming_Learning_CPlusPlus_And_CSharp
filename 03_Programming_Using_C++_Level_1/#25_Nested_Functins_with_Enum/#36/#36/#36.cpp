// Write a program to ask the user to enter  Number1 and Number2 operation Type
// and then perform the operation on the two numbers and display the result.

#include <iostream>
#include <string>
using namespace std;

enum enOperation
{
	ADD = '+',
	SUBTRACT = '-',
	MULTIPLY = '*',
	DIVIDE = '/'
};

// Function Prototypes
void ShowOperationsMenu()
{
    cout << "***************************" << endl;
    cout << "Available Operations" << endl;
    cout << "***************************" << endl;
    cout << "+. Addition" << endl;
    cout << "-. Subtraction" << endl;
    cout << "*. Multiplication" << endl;
    cout << "/. Division" << endl;
    cout << "***************************" << endl;
    cout << "Please enter operation symbol: ";
}

// Function Definitions
double ReadNumber(string message)
{
    double number;
    cout << message;
    cin >> number;
    return number;
}

// Function to read operation from user
enOperation ReadOperation()
{
    char op;
    cin >> op;
    return enOperation(op);
}

// Function to perform calculation based on operation
double Calculate(double num1, double num2, enOperation op)
{
    switch (op)
    {
    case ADD:
        return num1 + num2;
    case SUBTRACT:
        return num1 - num2;
    case MULTIPLY:
        return num1 * num2;
    case DIVIDE:
        if (num2 != 0)
            return num1 / num2;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    default:
        cout << "Error: Invalid operation!" << endl;
        return 0;
    }
}

// Main Function
int main()
{
    double num1 = ReadNumber("Enter the first number: ");
    double num2 = ReadNumber("Enter the second number: ");
    ShowOperationsMenu();
    enOperation op = ReadOperation();
    cout << "Result = " << Calculate(num1, num2, op) << endl;
    return 0;
}
