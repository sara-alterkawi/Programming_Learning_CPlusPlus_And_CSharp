// Write a program to fill a 3x3 matrix with random numbers, 
// then print each Col sum:
// Example:
// The following is a 3x3 random matrix:
// 5    46  87
// 1    12  2
// 87   2   68
// The the following are the sum of each col in the matrix:
// Col 1 Sum = 138
// Col 2 Sum = 15
// Col 3 Sum = 157

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

// Function to print row sums
void PrintColSums(const vector<vector<int>>& matrix, int rows, int columns)
{

    cout << "\nThe following are the sum of each Col in the matrix:" << endl;

    for (int j = 0; j < columns; j++)
    {
        int sum = 0;

        for (int i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }

        cout << "Col " << j + 1 << " Sum = " << sum << endl;
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
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    vector<vector<int>> matrix(3, vector<int>(3));
    FillMatrixWithRandomNumber(matrix, 3, 3);
    PrintMatrix(matrix, 3, 3);
    PrintColSums(matrix, 3, 3);

    return 0;
}
