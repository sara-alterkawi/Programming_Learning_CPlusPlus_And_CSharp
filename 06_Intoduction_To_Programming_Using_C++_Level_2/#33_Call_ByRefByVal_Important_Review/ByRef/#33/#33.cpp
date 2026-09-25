// Call by Reference in C++

#include<iostream>
using namespace std;

// Function to demonstrate call by reference
void Function1(int& x)
{
    x++;
}

// Main function
int main()
{
    int a = 10;
    Function1(a);
    cout << "\n a after calling function1 = " << a << endl;
    return 0;
}