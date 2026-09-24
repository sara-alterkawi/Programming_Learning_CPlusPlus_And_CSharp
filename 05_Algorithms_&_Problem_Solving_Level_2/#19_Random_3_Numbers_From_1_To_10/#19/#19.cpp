// Write a program to print three random numbers from 1 to 10.

// Output		
// 3
// 5
// 4

#include <iostream>
#include <string>
using namespace std;

// Function to RandomNumber
int RandomNumber(int from, int to)
{
	int RandomNumb = rand() % (to - from + 1) + from;
	return RandomNumb;
}

// Main Function
int main()
{
	srand((unsigned)time(NULL));
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	return 0;
}