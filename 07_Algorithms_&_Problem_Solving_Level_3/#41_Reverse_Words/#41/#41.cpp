// Write a program to read string and reverse its words.
// Example:
// Please Enter Your String ?
// Mohammed Abu - Hadhoud I'm From Jordan
// Output:
// String after reversing words :
// Jordan From I'm Abu-Hadhoud Mohammed

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// Function to read a string
string readString()
{
    string str;
    cout << "Please Enter Your String ?" << endl;
    getline(cin, str);
    return str;
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

// Function to reverse words in a string
string ReverseWordsInString(string str)
{
    vector<string> vString;
    string s2 = "";
    vString = SplitString(str, " ");
    // declare iterator
    vector<string>::iterator iter = vString.end();
    while (iter != vString.begin())
    {
        --iter;
        s2 += *iter + " ";
    }
    s2 = s2.substr(0, s2.length() - 1); //remove last space.
    return s2;
}

// Main function
int main()
{
    string str = readString();
    cout << "\nString after reversing words :\n" << ReverseWordsInString(str) << endl;

    return 0;
}