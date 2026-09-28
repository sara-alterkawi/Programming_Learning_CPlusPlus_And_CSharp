// Write a program to count given number in matrix.
// Matrix1:
// 9	1	12
// 0	9	1
// 0	9	9
// Enter the number to count in matrix ? 9
// Number 9 count in matrix is 4

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

// Function to count occurrences of a number in the matrix
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

// Main function
int main()
{
	vector<vector<int>> matrix1(3, vector<int>(3));

	// Initialize matrix1
	matrix1 = { {9,1,12},{0,9,1},{0,9,9} };
	// matrix1 = { {1,2,3},{4,5,6},{7,8,9} };

	// Print matrix1
	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	int number;  cout << "\nEnter the number to count in matrix? ";
	cin >> number;
	
	cout << "\nNumber " << number << " count in matrix is " << CountNumberInMatrix(matrix1, 3, 3, number) << endl;

	return 0;
}