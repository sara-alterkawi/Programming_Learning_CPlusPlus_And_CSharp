// Function Overloading
// Function overloading is a feature in C++ where two or more functions can have the same name but different parameters
// (different type or number of parameters).
// Overloading is type of polymorphism in C++.

#include <iostream>
using namespace std;
double MySum(double a, double b)
{
	return (a + b);
}
int MySum(int a, int b)
{
	return (a + b);
}
int MySum(int a, int b, int c)
{
	return (a + b + c);
}
int MySum(int a, int b, int c, int d)
{
	return (a + b + c + d);
}
int main()
{
	cout << MySum(10, 20) << endl;       // 30
	cout << MySum(10.1, 20.1) << endl;   // 30.2
	cout << MySum(10, 20, 30) << endl;   // 60
	cout << MySum(10, 20, 30, 40) << endl; // 100
	return 0;
}
