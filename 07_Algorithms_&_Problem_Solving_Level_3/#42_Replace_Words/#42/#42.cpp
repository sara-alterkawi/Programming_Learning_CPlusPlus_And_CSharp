// Write a program to replace words in string:
// Example: Output:
// Origial String
// Welcome to Jordan, Jordan is a nice country
// String After Replace :
// Welcome to USA, USA is a nice country

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to replace words in a string
string ReplaceWord(string str, string oldWord, string newWord)
{
	int pos = str.find(oldWord);
	while (pos != std::string::npos)
	{
		str = str.replace(pos, oldWord.length(), newWord);
		pos = str.find(oldWord);//find next
	}
	return str;
}

// Main function
int main()
{
	string str = "Welcome to Jordan, Jordan is a nice country";
	cout << "Original String\n" << str << endl;

	string oldWord = "Jordan";
	string newWord = "USA";

	string newStr = ReplaceWord(str, oldWord, newWord);
	cout << "\nString After Replace :\n" << newStr << endl;

    return 0;
}