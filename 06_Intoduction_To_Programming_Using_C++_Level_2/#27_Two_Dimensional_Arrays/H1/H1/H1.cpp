// Write a program that fills a 10x10 array with the multiplication table and prints it in a formatted way.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function to fill the 2D array with multiplication table values
int FillArray(int arr[10][10])
{
	for (int row = 0; row < 10; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			arr[row][col] = (row + 1) * (col + 1);
		}
	}

	return arr[10][10];
}

// Function to print the 2D array
void PrintArray(int arr[10][10])
{
	FillArray(arr);
	for (int row = 0; row < 10; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			printf("%0*d ", 2, arr[row][col]);
		}
		cout << endl;
	}
}

// main function
int main()
{
	int arr[10][10];
	PrintArray(arr);
}