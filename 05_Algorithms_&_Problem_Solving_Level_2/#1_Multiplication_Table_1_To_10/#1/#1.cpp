// write a program to print the multiplication table from 1 to 10 

#include <iostream>
#include <string>
using namespace std;

// Function to print the Header
void PrintMultiplicationTableHeader()
{
    cout << "\t\t\tMultiplication Table From 1 to 10\n" << endl;
    cout << "\t";
    for (int i = 1; i <= 10; i++)

        cout << i << "\t";
    cout << "\n----------------------------------------------------------------------------------------" << endl;
}

// Function to print the content
void PrintMultiplicationTable()
{
    PrintMultiplicationTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout <<" " << i << "   |" << "\t";
        for (int j = 1; j <= 10; j++)
            cout << i * j << "\t";
        cout << endl;
    }

}

// Main Function
int main()
{
    PrintMultiplicationTable();
    return 0;
}
