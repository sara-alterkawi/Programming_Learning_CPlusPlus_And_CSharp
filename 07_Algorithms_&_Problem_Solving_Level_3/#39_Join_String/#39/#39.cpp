// Write a program to join array of strings into a one string with separators
// Vector after join :
// Mohammed Faid Ali Maher
// Output:
// Vector after join:
// Mohammed Faid Ali Maher
// Array after join :
// Mohammed Faid Ali Maher

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// Function to join vector of strings with a separator
string JoinString(vector<string> vec, string delim)
{
    string result;
    for (string &s : vec)
    {
        result += s + delim;
	}
	return result.substr(0, result.length() - delim.length());
}

// Main function
int main()
{
    vector<string> vString = { "Mohammed","Faid","Ali","Maher" };
    cout << "Vector after join:\n" << JoinString(vString, " ") << endl;

    return 0;
}