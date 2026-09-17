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

// Structure to store input data
struct stCalculatorInput
{
    double Number1;
    double Number2;
    enOperation Operation;
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

// Function to read all inputs from user
stCalculatorInput ReadCalculatorInput()
{
    stCalculatorInput input;
    input.Number1 = ReadNumber("Enter the first number: ");
    input.Number2 = ReadNumber("Enter the second number: ");
    ShowOperationsMenu();
    input.Operation = ReadOperation();
    return input;
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

// Function to print the result
void PrintResult(double result)
{
    cout << "***************************" << endl;
    cout << "Result = " << result << endl;
    cout << "***************************" << endl;
}

// Main Function
int main()
{
    stCalculatorInput input = ReadCalculatorInput();
    PrintResult(Calculate(input.Number1, input.Number2, input.Operation));
    return 0;
}
