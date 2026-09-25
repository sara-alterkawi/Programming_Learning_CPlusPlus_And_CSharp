// Vector Iterators
// An iterator is an object that points to an element in a container and allows you to traverse the elements of the container.
// Vectors in C++ provide iterators to access and manipulate their elements.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num{ 1, 2, 3, 4, 5 };

	// declare iterator
	vector<int>::iterator iter;

	// use iterator with for loop
	for (iter = num.begin(); iter != num.end(); iter++)
		cout << *iter << "  ";

	return 0;
}