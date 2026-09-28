// Write a program to check if a given number exists in matrix or not.
// Example:
// Matrix1:
// 10 20 30
// 15 25 35
// 27 29 37
// Please Enter the number to look for in matrix ? 30
// Output:
// Yes it is there.
// No it is not there.

#include <iostream>
#include <vector>
#include <cstdlib>  // rand, srand
#include <iomanip>
#include <cmath>    // ceil
using namespace std;

// Function to fill a 3x3 matrix with random numbers
void FillMatrixWithRandomNumber(vector<vector<int>>& matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = rand() % 10 + 1; // Random numbers between 1 and 10
		}
	}
}

// Function to print the matrix
void PrintMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(3) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

// Function to check if a number exists in the matrix
bool IsNumberInMatrix(const vector<vector<int>>& matrix, int rows, int columns, int number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (matrix[i][j] == number)
			{
				return true;
			}
		}
	}
	return false;
}

// Main function
int main()
{
	/*
	int rows, columns;
	cout << "Enter number of rows: ";
	cin >> rows;
	cout << "Enter number of columns: ";
	cin >> columns;
	*/

	// Seed for random number generation
	srand(static_cast<unsigned int>(time(0)));

	vector<vector<int>> matrix1(3, vector<int>(3));
	FillMatrixWithRandomNumber(matrix1, 3, 3);
	cout << "Matrix1:" << endl;
	PrintMatrix(matrix1, 3, 3);

	int numberToFind;
	cout << "\nPlease Enter the number to look for in matrix? ";
	cin >> numberToFind;

	if (IsNumberInMatrix(matrix1, 3, 3, numberToFind))
	{
		cout << "\nYes it is there." << endl;
	}
	else
	{
		cout << "\nNo it is not there." << endl;
	}
	
}
