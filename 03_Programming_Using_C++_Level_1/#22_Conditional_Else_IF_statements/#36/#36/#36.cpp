// Write a program to ask the user to enter  Number1 and Number2 operation Type
// and then perform the operation on the two numbers and display the result.

#include <iostream>
#include <string>
using namespace std;

void performOperation(double num1, double num2, char op)
{
	double result;
	if (op == '+')
		result = num1 + num2;
	else if (op == '-')
		result = num1 - num2;
	else if (op == '*')
		result = num1 * num2;
	else if (op == '/')
	{
		if (num2 != 0)
			result = num1 / num2;
		else
		{
			cout << "Error: Division by zero!" << endl;
			return;
		}
	}
	else
	{
		cout << "Error: Invalid operation!" << endl;
		return;
	}
	
	cout << "Result: " << result << endl;
}

void getUserInput()
{
	double num1, num2;
	char op;
	cout << "Enter Number1: ";
	cin >> num1;
	cout << "Enter Number2: ";
	cin >> num2;
	cout << "Enter operation (+, -, *, /): ";
	cin >> op;
	performOperation(num1, num2, op);
}

int main()
{
	getUserInput();
	return 0;
}
