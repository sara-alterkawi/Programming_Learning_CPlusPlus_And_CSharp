// Write a program to replace words in string using custom function:
// Example: Output:
// Original String :
// Welcome to Jordan, Jordan is a nice country
// Replace with match case:
// Welcome to Jordan, Jordan is a nice country
// Replace with dont match case:
// Welcome to USA, USA is a nice country

#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

// Function to convert all characters in a string to lowercase
string  LowerAllString(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

// Function to join vector of strings with a separator
string JoinString(vector<string> vec, string delim)
{
    string result;
    for (string& s : vec)
    {
        result += s + delim;
    }
    return result.substr(0, result.length() - delim.length());
}

// Function to replace words in a string
string ReplaceWord(string str, string oldWord, string newWord, bool matchCase = true)
{
    vector<string> vString = SplitString(str, " ");
    for (string& s : vString)
    {
        if (matchCase)
        {
            if (s == oldWord)
            {
                s = newWord;
            }
        }
        else
        {
            if (LowerAllString(s) == LowerAllString(oldWord))
            {
                s = newWord;
            }
				}
    }
	return JoinString(vString, " ");
}

// Main function
int main()
{
	string str = "Welcome to Jordan , Jordan is a nice country";
	cout << "Original String\n" << str << endl;

	string oldWord = "jordan";
	string newWord = "USA";

	string result1 = ReplaceWord(str, oldWord, newWord, true);
	cout << "\nReplace with match case:\n" << result1 << endl;

	string result2 = ReplaceWord(str, oldWord, newWord, false);
	cout << "\nReplace with dont match case:\n" << result2 << endl;

	return 0;
}