// Change Elements
// This code demonstrates how to change elements in a vector using range-based for loops and direct indexing.
// It initializes a vector with integers, modifies the elements using a range-based for loop,
// and then updates specific elements using direct indexing and the at() method.
// Finally, it prints the updated vector.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num{ 1, 2, 3, 4, 5 };

    cout << "Initial Vector: ";

    for (const int& i : num)
    {
        cout << i << "  ";
    }

    cout << "\n\nUpdated Vector: ";

    for (int& i : num)
    {
        i = 20;
        cout << i << "  ";
    }

    num[1] = 40;
    num.at(2) = 80;
    num.at(4) = 90;

    cout << "\n\nUpdated Vector: ";

    for (const int& i : num)
    {
        cout << i << "  ";
    }

    return 0;
}