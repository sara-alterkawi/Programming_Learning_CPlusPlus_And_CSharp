// Write a program to check if the matrix is identity or not.
// Matrix1:
// 1	0	0
// 0	1	0
// 1	0	1
// YES: Matrix is identity.
// NO: Matrix is not identity.

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

// Function to check if the matrix is identity or not
bool IsIdentityMarix(const vector<vector<int>>& matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			//check for diagonals element
			if (i == j && matrix[i][j] != 1)
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
	matrix1 = { {1,0,0},{0,1,0},{0,0,1} };
	// matrix1 = { {1,2,3},{4,5,6},{7,8,9} };
	
	// Print matrix1
	cout << "Matrix1:\n"; 
	PrintMatrix(matrix1, 3, 3);

	if (IsIdentityMarix(matrix1, 3, 3))
		cout << "\nYES: Matrix is identity." << endl;
	else 
		cout << "\nNo: Matrix is NOT identity." << endl;  

	return 0;
}