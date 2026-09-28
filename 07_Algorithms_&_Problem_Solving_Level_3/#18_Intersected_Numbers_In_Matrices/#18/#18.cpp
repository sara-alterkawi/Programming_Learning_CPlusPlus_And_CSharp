// Write a program to print the intersected numbers in two given matrices.
// Example:
// Matrix1:
// 77	5	12
// 22	20	1
// 1	0	9
// Matrix2:
// 5	80	90
// 22	77	1
// 10	8	33
// Output:
// Intersected Numbers are :
// 77	5	22	1	1

#include <iostream>
#include <vector>
#include <cstdlib>  // rand, srand
#include <iomanip>
#include <cmath>    // ceil
using namespace std;

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

// Function to fill the matrix with random numbers
void  PrintIntersectedNumbers(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2, int rows, int columns)
{
	cout << "\nIntersected Numbers are :" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (IsNumberInMatrix(matrix2, rows, columns, matrix1[i][j]))
			{
				cout << setw(3) << matrix1[i][j] << "\t";
			}
		}
	}
	cout << endl;
}

// Main function
int main()
{
	// Initialize matrix1
	vector<vector<int>> matrix1(3, vector<int>(3));
	matrix1 = { {77,5,12},{22,20,1},{1,0,9} };

	// Initialize matrix1
	vector<vector<int>> matrix2(3, vector<int>(3));
	matrix2 = { {5,80,90},{22,77,1},{10,8,33} };

	// Print matrix1
	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	// Print matrix2
	cout << "\nMatrix2:\n";
	PrintMatrix(matrix2, 3, 3);

	// Print intersected numbers
	PrintIntersectedNumbers(matrix1, matrix2, 3, 3);

	return 0;
}
