// Write a program to fill two 3x3 matrix with random numbers
// and them, then multiply them into a 3rd matrix and print it. 
// Ex
// Matrix1: 
// 08	07	07 
// 01	06	10
// 10	01	09
// Matrix2: 
// 04	05	06
// 04	05	08
// 06	08	01
// Results: 
// 32	35	42
// 04	30	80
// 60	08	09

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


// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2, int rows, int columns)
{
	vector<vector<int>> result(rows, vector<int>(columns, 0));

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			for (int k = 0; k < columns; ++k)
			{
				result[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	return result;
}

// Main function
int main() {
	/*
	int rows, columns;
	cout << "Enter number of rows: ";
	cin >> rows;
	cout << "Enter number of columns: ";
	cin >> columns;
	*/

	// Seed for random number generation
	srand(static_cast<unsigned int>(time(0)));

	// Generate two random 3x3 matrices
	vector<vector<int>> matrix1(3, vector<int>(3));
	FillMatrixWithRandomNumber(matrix1, 3, 3);

	vector<vector<int>> matrix2(3, vector<int>(3));
	FillMatrixWithRandomNumber(matrix2, 3, 3);

	// Print the generated matrices
	cout << "Matrix 1:" << endl;
	PrintMatrix(matrix1, 3, 3);

	cout << "\nMatrix 2:" << endl;
	PrintMatrix(matrix2, 3, 3);

	// Multiply the matrices
	vector<vector<int>> result = multiplyMatrices(matrix1, matrix2, 3, 3);

	// Print the result matrix
	cout << "\nResultant Matrix after multiplication:" << endl;
	PrintMatrix(result, 3, 3);

	return 0;
}