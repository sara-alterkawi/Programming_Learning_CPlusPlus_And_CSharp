// Write a program to ask the user to enter Number N and M then Print the N to the power of M.

#include <iostream>
#include <string>
using namespace std;

// 
void readNumbers(int& N, int& M)
{
	cout << "Enter Base N: ";
	cin >> N;
	cout << "Enter Exponent M: ";
	cin >> M;
}

// 
int power(int base, int expo)
{
	int result = 1;
	while (expo != 0)
	{
		result *= base;
		--expo;
	}
	return result;
}

//
void printResult(int base, int expo, int result)
{
	cout << base << " to the power of " << expo << " is " << result << endl;
}

// Main function
int main()
{
	int N, M;
	readNumbers(N, M);
	printResult(N, M, power(N, M));
	return 0;
}