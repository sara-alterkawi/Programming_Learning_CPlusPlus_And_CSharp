// Write a program to check if the matrix is Sparce or not.
// A sparse matrix is a matrix in which most of the elements are zero.
// Example of sparse matrix:
// Matrix1:
// 10	0	12
// 20	15	1
// 0	0	9
// No: It's NOT Sparce.

// Example of non sparse matrix:
// 0	0	12
// 0	0	1
// 0	0	9
// Yes : It is Sparse

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

// Function to compare two matrices
int CountNumberInMatrix(const vector<vector<int>>& matrix, int rows, int columns, int number)
{
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (matrix[i][j] == number)
			{
				count++;
			}
		}
	}
	return count;
}

// Function to check if the matrix is sparse
bool IsSparseMatrix(const vector<vector<int>>& matrix, int rows, int columns)
{
	int MatrixSize = rows * columns;
	int zeroCount = CountNumberInMatrix(matrix, rows, columns, 0);
	
	// A matrix is considered sparse if more than half of its elements are zero
	return (zeroCount >= ceil((float)MatrixSize / 2));
}

// Main function
int main()
{
	vector<vector<int>> matrix1(3, vector<int>(3));

	// Initialize matrix1
	matrix1 = { {0,0,12},{0,0,1},{0,0,9} };
	// matrix1 = { {10,0,12},{20,15,1},{0,0,9} };

	// Print matrix1
	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	if (IsSparseMatrix(matrix1, 3, 3))
		cout << "\nYes: It is Sparse\n";
	else
		cout << "\nNo: It's NOT Sparse\n";

	return 0;
}