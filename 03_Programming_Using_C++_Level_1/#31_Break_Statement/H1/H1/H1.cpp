// Write a program to do the following:
// Define an array of integers with 10 elements.
// arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100}
// Search for 20 in the array and print its index, use for loop and a break statement to do this.

#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
	int arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
	int searchFor = 20;

	for (int i = 0; i < 10; i++) {
		if (arr[i] == searchFor) {
			cout << "Element " << searchFor << " found at index: " << i << endl;
			break;
		}
	}
	return 0;
}