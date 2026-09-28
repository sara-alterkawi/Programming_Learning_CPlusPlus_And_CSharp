// Write a program to compare two matrices and check if they are equal or not. 
// Matrix1: 
// 06 03 06
// 04 05 09
// 03 04 04 

// Matrix2: 
// 08 09 06
// 06 08 06
// 09 03 05
// No: martices are NOT equal.
// Yes: martices are equal.

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
			matrix[i][j] = rand() % 10 + 1; // Random numbers between 1 and 10
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

// Function to sum all numbers in a matrix
int SumOfMatrix(const vector<vector<int>>& matrix, int rows, int columns)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}

// Function to compare two matrices
bool AreMatricesEqual(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2, int rows, int columns)
{
	return (SumOfMatrix(matrix1, rows, columns) == SumOfMatrix(matrix2, rows, columns));
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

	vector<vector<int>> matrix2(3, vector<int>(3));
	FillMatrixWithRandomNumber(matrix2, 3, 3);
	cout << "\nMatrix2:" << endl;
	PrintMatrix(matrix2, 3, 3);

	// Compare the two matrices
	if (AreMatricesEqual(matrix1, matrix2, 3, 3))
		cout << "\nYES: both martices are equal." << endl;
	else  
		cout << "\nNo: martices are NOT equal." << endl;

	return 0;
}