// Using Recursion:
// Program to print numbers from M down to N.

#include<iostream>
using namespace std; 

void PrintNumbersFromMtoN(int m, int n)
{
	if (m >= n)
	{
		cout << m << endl;
		PrintNumbersFromMtoN(m - 1, n);
	}
}

int main()
{
	PrintNumbersFromMtoN(10, 1);
	return 0;
}