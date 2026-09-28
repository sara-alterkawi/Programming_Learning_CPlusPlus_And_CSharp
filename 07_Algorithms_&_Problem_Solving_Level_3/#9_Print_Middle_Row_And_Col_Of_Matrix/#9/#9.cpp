// Write a program to fill a 3x3 matrix with random numbers,
// print it, then print the middle row and middle col. 
// Matrix1: 
// 01	10	07
// 10	03	02
// 06	03	09
// Middle Row of Matrix1 is:
// 10	03	02
// Middle Col of Matrixi is:
// 10	03	03

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

// Function to print the middle row
void PrintMiddleRow(vector<vector<int>>& matrix, int rows, int columns)
{
	int middleRow = rows / 2;
	cout << "\nMiddle Row of Matrix is:" << endl;
	for (int j = 0; j < columns; j++)
	{
		cout << setw(3) << matrix[middleRow][j] << "\t";
	}
	cout << endl;
}

// Function to print the middle column
void PrintMiddleColumn(vector<vector<int>>& matrix, int rows, int columns)
{
	int middleCol = columns / 2;
	cout << "\nMiddle Col of Matrix is:" << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << setw(3) << matrix[i][middleCol] << "\t";
	}
	cout << endl;
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
	PrintMiddleRow(matrix, 3, 3);
	PrintMiddleColumn(matrix, 3, 3);

	return 0;
}