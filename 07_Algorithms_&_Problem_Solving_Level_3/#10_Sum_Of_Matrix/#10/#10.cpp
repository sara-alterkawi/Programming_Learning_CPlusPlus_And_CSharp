// Write a program to fill two 3x3 matrix with random numbers
// and them, then write a function to sum all numbers in this  matrix and print it. 
// Matrix1: 
// 04 08 06
// 03 10 07
// 08 08 10 
// Sum of Matrixl is: 64

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
	cout << "The following is a 3x3 random matrix :" << endl;
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

	vector<vector<int>> matrix(3, vector<int>(3));
	FillMatrixWithRandomNumber(matrix, 3, 3);
	PrintMatrix(matrix, 3, 3);

	int sum = SumOfMatrix(matrix, 3, 3);
	cout << "\nSum of Matrix is: " << sum << endl;

	return 0;
}