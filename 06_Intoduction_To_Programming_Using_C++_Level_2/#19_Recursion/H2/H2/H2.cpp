// Using Recursion:
// Program to calculate power N^ M.

#include<iostream>
using namespace std;

int MyPower(int base, int power) 
{
	if (power == 0)
	{
		return 1;
	} else {
		return (base * MyPower(base, power - 1));
	}
}

int main()
{
	cout << MyPower(2, 4); 
	return 0;
}