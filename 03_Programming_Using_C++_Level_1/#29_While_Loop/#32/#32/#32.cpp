// Write a program to ask the user to enter Number N and M then Print the N to the power of M.

#include <iostream>
#include <string>
using namespace std;

void power(int base, int expo)
{
	int originalExpo = expo;
	int result = 1;
	while (expo != 0)
	{
		result *= base;
		--expo;
	}
	cout << base << " to the power of " << originalExpo << " is " << result << endl;
}

void getInput(int &N, int &M)
{
	cout << "Enter Base N: ";
	cin >> N;
	cout << "Enter Exponent M: ";
	cin >> M;
}


// Main function
int main()
{
	int N, M;
	getInput(N, M);
	power(N, M);
	return 0;
}