// Memory Management: new and delete
// Topic: Dynamic Memory Allocation
// Subtopic: Using new and delete for single variables
// Description: This code demonstrates how to dynamically allocate memory for single variables using new and delete in C++.

#include<iostream>
using namespace std;
int main()
{
    // declare an int pointer
    int* ptrX;

    // declare a float pointer
    float* ptrY;

    // dynamically allocate memory 
    ptrX = new int;
    ptrY = new float;

    // assigning value to the memory
    *ptrX = 45;
    *ptrY = 58.35f;
    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // deallocate the memory
    delete ptrX;
    delete ptrY;

    return 0;
}