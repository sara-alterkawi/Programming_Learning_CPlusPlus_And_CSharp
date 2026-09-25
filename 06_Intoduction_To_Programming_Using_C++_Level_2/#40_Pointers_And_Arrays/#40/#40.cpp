// Pointers and Arrays
// In C++, the name of an array acts as a pointer to its first element.
// This means that if you have an array, you can use a pointer to access and manipulate its elements.
// When you increment a pointer, it moves to the next element in the array based on the size of the data type it points to.

#include<iostream>
using namespace std;
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int* ptr;
    ptr = arr; 

    // ptr is equivalent to &arr[0];
    // ptr + 1 is equivalent to &arr[1];
    // ptr + 2 is equivalent to &arr[2];
    // ptr + 3 is equivalent to &arr[3];

    cout << "Addresses are:\n";
    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;

    cout << "\nValues are: \n";
    cout << *(ptr) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;

    return 0;
}