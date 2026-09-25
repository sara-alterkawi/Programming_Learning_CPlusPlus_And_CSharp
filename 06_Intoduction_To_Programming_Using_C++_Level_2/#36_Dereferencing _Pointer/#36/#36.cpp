// Dereferencing Pointer Variables
// A pointer variable can be dereferenced using the unary operator * (asterisk).
// Dereferencing a pointer gives access to the value stored at the address the pointer is pointing to.

#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << "a value       = " << a << endl;
	cout << "a address     = " << &a << endl << endl;

	int* p;
	p = &a;
	cout << "Pointer Value = " << p << endl;
	cout << "Value of the address that p is pointing to is " << * p << endl << endl;

	*p = 20;
	cout << a << endl;
	cout << * p << endl << endl;

	a = 30;
	cout << a << endl;
	cout << * p << endl;
	
	return 0;
}