// Write a program to read a string then Trim Left, Right, All
// Example:
// Please Enter Your String ?
// String       =       Sara Al_terkawi     
// Output:
// Trim Left    = Sara Al_terkawi       
// Trim Right   =       Sara Al_terkawi
// Trim         = Sara Al_terkawi

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Function to read a string from user input
string ReadString()
{
    string input;
    cout << "Please Enter Your String ?" << endl;
    getline(cin, input);
    return input;
}

// Function to trim left spaces
string TrimLeft(const string &str)
{
    for (short i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            return str.substr(i, str.length() - i); 
        }
    }
    return "";
}

// Function to trim right spaces
string TrimRight(const string &str)
{
    for (short i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            return str.substr(0, i + 1);
        }
    }
    return "";
}

// Function to trim all spaces
string TrimAll(string str)
{
    return (TrimLeft(TrimRight(str)));
}


// Main function
int main()
{
	string input = ReadString();
	cout << "String       = " << input << endl;
	cout << "Trim Left    = " << TrimLeft(input) << endl;
	cout << "Trim Right   = " << TrimRight(input) << endl;
	cout << "Trim         = " << TrimAll(input) << endl;
    
    return 0;
}