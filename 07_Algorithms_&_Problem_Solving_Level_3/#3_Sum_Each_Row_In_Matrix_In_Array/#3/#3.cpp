// Write a program to fill a 3x3 matrix with random numbers, 
// then sum each row in separate array and print the results :
// Example:
// The following is a 3x3 random matrix: 
// 53 43 6
// 65 83 48
// 64 30 36
// The the following are the sum of each row in the matrix:
// Row 1 Sum = 102
// Row 2 Sum = 196
// Row 3 Sum = 130

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

// Function to print the sum of each row
vector<int> RowSums(const vector<vector<int>>& matrix, int rows, int columns)
{
    vector<int> rowSums(rows, 0);

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < columns; j++)
        {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;

    }
    return rowSums;
}

// Function to print row sums
void PrintRowSums(const vector<vector<int>>& matrix, int rows, int columns)
{
    vector<int> rowSums = RowSums(matrix, rows, columns);

    cout << "\nThe following are the sum of each row in the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << rowSums[i] << endl;
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
    PrintRowSums(matrix,3 ,3);

    return 0;
}
