// Dynamic Arrays: new and delete
// Dynamic memory allocation is a powerful feature in C++ that allows you to allocate memory at runtime
// using the new operator and deallocate it using the delete operator.
// This is particularly useful when the size of the data structure is not known at compile time and needs
// to be determined during program execution.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter total number of students: ";
    cin >> num; float* ptr;

    // memory allocation of num number of floats
    ptr = new float[num];

    cout << "Enter grades of students." << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying grades of students." << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete[] ptr;

    return 0;
}