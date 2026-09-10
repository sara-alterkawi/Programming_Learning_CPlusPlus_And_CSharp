// Passing Objects to Functions (ByRef_ByVal)
// This program demonstrates passing objects to functions by value and by reference.
#include<iostream>
using namespace std;
// Class
class clsA
{
	// Data members
public:
	int x;
	// Constructor
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};
// Object sent by value, any updated will not b reflected
// on the original object
void Fun1(clsA A1)
{
	A1.x = 100;
}
// Object sent by reference, any updated will be reflected
// on the original object
void Fun2(clsA& A1)
{
	A1.x = 200;
}
// Main function
int main()
{
	clsA A1;
	A1.x = 50;
	cout << "\nA.x before calling function1: \n";
	A1.Print();
	// Pass by value, object will not be afected.
	Fun1(A1);
	cout << "\nA.x after calling function1 byval: \n";
	A1.Print();
	// Pass by value, object will be afected.
	Fun2(A1);
	cout << "\nA.x after calling function2 byref: \n";
	A1.Print();
	system("pause>0");
}