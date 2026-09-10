// Objects and Dynamic Array
// In this example, we will create a dynamic array of objects using the new keyword in C++.
#include<iostream>
#include<vector>
using namespace std;
// class declaration
class clsA
{
	// Data Members and Methods
public:
	// Dummy constructor
	clsA() {}
	// Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}
	int x;
	// Print Method
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};
// Main Function
int main()
{
	short NumberOfObjects = 5;
	// Allocating dynamic array of Size NumberOfObjects using new keyword
	clsA* arrA = new clsA[NumberOfObjects];
	// Calling constructor for each index of array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i] = clsA(i);
	}
	// Printing contents of array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i].Print();
	}
	return 0;
	system("pause>0");
}