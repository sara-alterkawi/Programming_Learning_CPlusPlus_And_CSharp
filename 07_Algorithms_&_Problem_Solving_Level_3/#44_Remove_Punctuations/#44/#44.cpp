// Write a program to remove all punctuations from a string :
// Example: Output:
// Original String :
// Welcome to Jordan, Jordan is a nice country; it's amazing.
// Pauncuations Removed :
// Welcome to Jordan Jordan is a nice country its amazing

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to replace a word in a string
string RemovePunctuationsFromString(string str)
{
    string s2 = "";
    for (short i = 0; i < str.length(); i++)
    {
        if (!ispunct(str[i]))
        {
            s2 += str[i];
        }
    }
    return s2;
}

// Main function
int main()
{
    string str = "Welcome to Jordan, Jordan is a nice country; it's amazing.";
    cout << "Original String\n" << str << endl;

	string result = RemovePunctuationsFromString(str);
	cout << "\nPauncuations Removed\n" << result << endl;

    return 0;
}