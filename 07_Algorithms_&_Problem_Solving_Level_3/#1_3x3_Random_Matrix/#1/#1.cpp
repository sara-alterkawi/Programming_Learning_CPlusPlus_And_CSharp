// Write a program to fill a 3x3 matrix with random numbers.
// Example:
// The following is a 3x3 random matrix :
// 16   13  24
// 45   51  19
// 30   3   100

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
            matrix[i][j] = rand() % 100 + 1; // Random numbers between 1 and 100
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

// Main Function
int main()
{
    /*
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    */
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    vector<vector<int>> matrix(3, vector<int>(3));
    FillMatrixWithRandomNumber(matrix, 3, 3);
    PrintMatrix(matrix, 3, 3);

    return 0;
}
