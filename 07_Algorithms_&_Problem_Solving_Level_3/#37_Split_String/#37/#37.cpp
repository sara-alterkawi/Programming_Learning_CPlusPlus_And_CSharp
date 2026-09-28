// Write a program to read a string then make a function to split each word in vector.
// Example:
// Please Enter Your String ?
// Sara Al_terkawi @ProgrammingAdvices
// Output:
// Tokens = 3
// Sara
// Al_terkawi
// @ProgrammingAdvices

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

// Function to split a string into words based on a delimiter
vector<string> SplitString(string str, string delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord; // define a string variable
    // use find() function to get the position of the delimiters
    while ((pos = str.find(delim)) != std::string::npos)
    {
        sWord = str.substr(0, pos); // store the word
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        str.erase(0, pos + delim.length());  /* erase() until positon and move to next word. */
    }
    if (str != "")
    {
        vString.push_back(str); // it adds last word of the string.
    }
    return vString;
}

// Main function
int main()
{
    vector<string> inputString;
    inputString = SplitString(ReadString(), " ");

    cout << "\nTokens = " << inputString.size() << endl;

    for (string& s : inputString)
    {
        cout << s << endl;
    }
	return 0;
}