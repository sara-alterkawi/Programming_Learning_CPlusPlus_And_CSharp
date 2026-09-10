// BigO_Notation
// This is a simple program to demonstrate the concept of Big O Notation in C++.
#include <iostream>
using namespace std;
// Function demonstrates a linear search algorithm, which has a time complexity of O(n).
short FindNumberAlgorhim1(short arr1[10], short Number)
{
    int n = 10;
    short pos = -1;
    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            pos = i;
        }
    }
    return pos;
}
// Function demonstrates a linear search algorithm, which has a time complexity of O(n).
short FindNumberAlgorhim2(short arr1[10], short Number)
{
    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            return i;
        }
    }
    return -1;
}
// Main function
int main()
{
    short arr1[10] = { 10,20,30,40,50,60,70,80,90,100 };
    cout << FindNumberAlgorhim1(arr1, 100) << "\n";
    cout << FindNumberAlgorhim2(arr1, 100) << "\n";
    system("pause>0");
    return 0;
}