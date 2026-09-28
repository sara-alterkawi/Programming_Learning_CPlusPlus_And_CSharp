// Write a program to print Fibonacci Series of 10.
// 1	1	2	3	5	8	13	21	34	55

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Function to generate Fibonacci series
vector<int> generateAndPrintFibonacci(int number, int prev, int prevPrev)
{
	vector<int> fibSeries;
	if (number > 0)
	{
		int next = prevPrev + prev;
		fibSeries.push_back(next);
		cout << next << "\t";
		int temp = prevPrev;
		prevPrev = prevPrev + prev;
		prev = temp;
		generateAndPrintFibonacci(number - 1, prev, prevPrev);
	}
	return fibSeries;
}


// Main function
int main()
{
	vector<int> fibSeries = generateAndPrintFibonacci(10, 1, 0);

	return 0;
}