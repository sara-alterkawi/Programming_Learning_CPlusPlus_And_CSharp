// Write a program to print the Minimum and Maximum Numbers in Matrix.
// Example:
// Matrix1:
// 77	5	12
// 22	20	1
// 1	0	9
// Output:
// Minimum Number is : 3
// Max Number is : 77

#include <iostream>
#include <vector>
#include <cstdlib>  // rand, srand
#include <iomanip>
using namespace std;

// Function to fill a 3x3 matrix with random numbers
void FillMatrixWithRandomNumber(vector<vector<int>>& matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = rand() % 100; // Random numbers between 0 and 100
		}
	}
}

// Function to print the matrix
void PrintMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	// cout << "The following is a 3x3 random matrix :" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(3) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

// Function to find and print the Minimum
int MinNumberInMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	int minNumber = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (matrix[i][j] < minNumber)
			{
				minNumber = matrix[i][j];
			}
		}
	}
	cout << "\nMinimum Number is : " << minNumber << endl;

	return minNumber;
}

// Function to find and print the Maximum
int MaxNumberInMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	int maxNumber = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (matrix[i][j] > maxNumber)
			{
				maxNumber = matrix[i][j];
			}
		}
	}
	cout << "\nMax Number is : " << maxNumber << endl;

	return maxNumber;
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
	MinNumberInMatrix(matrix1, 3, 3);
	MaxNumberInMatrix(matrix1, 3, 3);

	return 0;
}