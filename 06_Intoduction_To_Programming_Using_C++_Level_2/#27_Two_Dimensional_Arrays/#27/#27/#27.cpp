// Two Dimensional Arrays
// C++ program to demonstrate declaration, initialization and printing of 2D array

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;


// Main function
int main() 
{ 
	// int x[Rows][Cols];
	int x[3][4] = { {1,2,3,4}, 
		            {5,6,7,8},                    
		            {9,10,11,12}};
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)    
		{             
			cout << x[row][col] << " ";         
		}         cout << endl;     
	} 
	return 0;
}