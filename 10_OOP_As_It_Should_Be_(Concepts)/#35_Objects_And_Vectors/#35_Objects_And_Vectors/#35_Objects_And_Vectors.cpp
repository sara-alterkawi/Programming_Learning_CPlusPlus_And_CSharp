// Objects and Vectors
// This program demonstrates how to Add Objects to Vector.
#include<iostream>
#include<vector>
using namespace std;
// This is a simple class with a constructor and a method to print its value
class clsA
{
	// Data members
public:
	// Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}
	int x;
	// Method to print the value of x
	void Print()
	{
		cout << "The value of x = " << x << endl;
	}
};
// Main function
int main()
{
	vector <clsA> v1;
	short NumberOfObjects = 5;
	// Inserting object at the end of vector
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1.push_back(clsA(i));
	}
	// Printing object content
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1[i].Print();
	}
	system("pause>0");
}

