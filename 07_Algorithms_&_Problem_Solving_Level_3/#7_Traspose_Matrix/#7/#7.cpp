// Write a program to fill a 3x3 matrix with ordered numbers 
// and print it, then transpose matrix and print it. 
// The following is a 3x3 ordered matrix: 
// 1	2	3 
// 4	5	6
// 7	8	9
// The following is the transposed matrix: 
// 1	4	7
// 2	5	8 
// 3	6	9

#include <iostream>
#include <vector>
#include <cstdlib>  // rand, srand
#include <iomanip>
using namespace std;

// Function to fill a 3x3 matrix with ordered numbers
void FillMatrixWithOrderedNumber(vector<vector<int>>& matrix, int rows, int columns)
{
	int num = 1;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			matrix[i][j] = num++;
		}
	}
}

// Function to print the matrix
void PrintMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	cout << "The following is a 3x3 ordered matrix :" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(3) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

// Function to transpose the matrix
void TransposeMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	vector<vector<int>> transposed(columns, vector<int>(rows));

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			transposed[j][i] = matrix[i][j];
		}
	}
}

// Function to print the transposed matrix
void PrintTransposedMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	cout << "\nThe following is the transposed matrix :" << endl;
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << setw(3) << matrix[j][i] << "\t";
		}
		cout << endl;
	}
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
	vector<vector<int>> matrix(3, vector<int>(3));

	FillMatrixWithOrderedNumber(matrix, 3, 3);
	PrintMatrix(matrix, 3, 3);
	TransposeMatrix(matrix, 3, 3);
	PrintTransposedMatrix(matrix, 3, 3);

	return 0;
}