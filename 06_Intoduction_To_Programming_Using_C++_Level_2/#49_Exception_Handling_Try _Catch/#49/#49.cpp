// Exception Handling: Try Catch
// The code is intended to demonstrate exception handling in C++ using a vector and accessing an out-of-bounds index.
// The code should compile and run without errors, printing "out of bound" when an out-of-bounds access is attempted.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num{ 1, 2, 3, 4, 5 };

    try
    {
        cout << num.at(5);
    }
    catch (...)
    {
        cout << "out of bound\n";
    }

    return 0;
}