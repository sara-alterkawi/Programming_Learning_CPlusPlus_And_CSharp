// Write a program to check if the matrix is Scalar or not.
// Matrix1:
// 9	0	0
// 0	9	0
// 0	0	9
// YES: Matrix is scalar.
// NO: Matrix is not scalar.

#include <iostream>
#include <vector>
#include <cstdlib>  // rand, srand
#include <iomanip>
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

// Function to check if the matrix is scalar
bool IsScalarMarix(const vector<vector<int>>& matrix, int rows, int columns)
{
	int FirstDiagElemement = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			//check for diagonals element
			if (i == j && matrix[i][j] != FirstDiagElemement)
			{
				return false;
			}
			//check for rest elements
			else if (i != j && matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

// Main function
int main()
{
	vector<vector<int>> matrix1(3, vector<int>(3));

	// Initialize matrix1
	matrix1 = { {9,0,0},{0,9,0},{0,0,9} };
	// matrix1 = { {1,2,3},{4,5,6},{7,8,9} };

	// Print matrix1
	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	if (IsScalarMarix(matrix1, 3, 3))
		cout << "\nYES: Matrix is scalar." << endl;
	else
		cout << "\nNo: Matrix is NOT scalar." << endl;

	return 0;
}