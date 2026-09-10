// Calculator Project
// This is a simple calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.
// The program defines a Calculator class with methods for each operation, as well as methods to clear the result, get the final result, cancel the last operation, and print the result.

#include <iostream>
using namespace std;

// Calculator Class
class clsCalculator
{
	// Data Members
private:
	float _Result = 0;
	float _LastNumber = 0;
	string _LastOperation = "Clear";
	float _PreviousResult = 0;
	bool _IsZero(float number)
	{
		return (number == 0);
	}

	// Member Functions
public:
	// Constructor
	clsCalculator()
	{
		_Result = 0;
	}

	// Methods
	// Clear Result
	void Clear()
	{
		_LastNumber = 0;
		_PreviousResult = 0;
		_LastOperation = "Clear";
		_Result = 0;
	}

	// Arithmetic Operations, Each method updates the Result member variable
	// based on the operation performed, and the input number provided
	// Addition
	void Add(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Adding";
		_Result += Number;
	}

	// Subtraction
	void Subtract(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Subtracting";
		_Result -= Number;
	}

	// Multiplication
	void Multiply(float Number)
	{
		_LastNumber = Number;
		_LastOperation = "Multiplying";
		_PreviousResult = _Result;
		_Result *= Number;
	}

	// Division
	void Divide(float Number)
	{
		_LastNumber = Number;
		if (_IsZero(Number))
		{
			Number = 1;
		}
		_PreviousResult = _Result;
		_LastOperation = "Dividing";
		_Result /= Number;
	}

	// Get Final Result
	double GetFinalResult()
	{
		return _Result;
	}

	// Cancel Last Operation
	void CancelLastOperation()
	{
		_LastNumber = 0;
		_LastOperation = "Cancelling Last Operation";
		_Result = _PreviousResult;
	}

	// Print Result
	void PrintResult()
	{
		cout << "Result ";
		cout << "After " << _LastOperation << " " << _LastNumber << " is: " << _Result << "\n";
	}
};

// Main Function
int main()
{
	// Create Calculator Object
	clsCalculator Calculator1;

	// Perform Operations
	Calculator1.Clear();
	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();

	return 0;
}