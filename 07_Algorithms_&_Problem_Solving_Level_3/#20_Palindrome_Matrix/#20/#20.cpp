// Write a program to check it the matrix is Palindrome or not.
// Example:
// Matrix1:
// 1	2	1
// 5	5	5
// 7	3	7
// Output:
// Yes : Matrix is Palingrome
// Matrix1 :
// 1	2	1
// 5	5	5
// 7	3	8
// No: Matrix is NOT Palindrome

#include <iostream>
#include <vector>
#include <cstdlib>  // rand, srand
#include <iomanip>
using namespace std;

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

// Function to check if the matrix is palindrome
int IsPalindromeMatrix(vector<vector<int>>& matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns / 2; j++)
		{
			if (matrix[i][j] != matrix[i][columns - j - 1])
			{
				return 0; // Not a palindrome
			}
		}
	}
	return 1; // Is a palindrome
}

// Main function
int main()
{
	vector<vector<int>> matrix1(3, vector<int>(3));

	// Initialize matrix1
	// matrix1 = { {1,2,1},{5,5,5},{7,3,7} };
	matrix1 = { {1,2,1},{5,5,5},{7,3,8} };

	cout << "Matrix1:\n";
	PrintMatrix(matrix1, 3, 3);

	if (IsPalindromeMatrix(matrix1, 3, 3)) 
		cout << "\nYes: Matrix is Palindrome\n"; 
	else  
		cout << "\nNo: Matrix is NOT Palindrome\n";

	return 0;
}