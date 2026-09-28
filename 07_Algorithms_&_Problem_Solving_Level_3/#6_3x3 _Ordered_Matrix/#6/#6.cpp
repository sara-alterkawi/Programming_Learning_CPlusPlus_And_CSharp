// Write a program to fill a 3x3 matrix with ordered numbers. 
// The following is a 3x3 ordered matrix: 
// 1	2	3 
// 4	5	6
// 7	8	9

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
	return 0;
}