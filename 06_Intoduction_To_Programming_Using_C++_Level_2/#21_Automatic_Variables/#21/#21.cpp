// Automatic Variables
// The auto keyword in C++ is used to declare variables with automatic type deduction.
// This means that the compiler automatically infers the type of the variable based on the value assigned to it.
// This feature was introduced in C++11 and has been widely adopted in modern C++ programming.

#include <iostream>
using namespace std;

int main()
{
    auto x = 10;                    // Type = int
    auto y = 12.5;                  // Type = double
    auto z = "Mohammed Abu-Hadhoud";// Type  string*

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;

}