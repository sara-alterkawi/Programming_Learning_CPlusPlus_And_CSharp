// Write a program to print Fibonacci Series of 10.
// 1	1	2	3	5	8	13	21	34	55

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Function to generate Fibonacci series
vector<int> generateAndPrintFibonacci(int number)
{
	vector<int> fibSeries;
	int prevPrev = 0, prev = 1;
	fibSeries.push_back(prev);
	cout << prev << "\t";

	// Generate the series
	for (int i = 2; i <= number; ++i)
	{
		fibSeries.push_back(prevPrev + prev);
		cout << prevPrev + prev << "\t";
		int temp = prev;
		prev = prevPrev + prev;
		prevPrev = temp;
	}
	cout << endl;
	return fibSeries;
}


// Main function
int main()
{
	vector<int> fibSeries = generateAndPrintFibonacci(10);
		
	return 0;
}