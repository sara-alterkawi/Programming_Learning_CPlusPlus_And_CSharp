// Average of 3 Numbers:

#include <iostream>
using namespace std;

int main()
{
    int Mark1;
    cout << "Please enter your first Mark" << endl;
    cin >> Mark1;

    int Mark2;
    cout << "Please enter your second Mark" << endl;
    cin >> Mark2;

    int Mark3;
    cout << "Please enter your second Mark" << endl;
    cin >> Mark3;

    int Average = (Mark1 + Mark2 + Mark3)/3;

    cout << endl << "Average = " << Average << endl;

    return 0;
}