// Write a program to guess a 3-Letter Password (all capital)
// Input
// AAF
// Output		
// Trail [1]: AAA
// Trail [2]: AAB
// Trail [3]: AAC
// Trail [4]: AAD
// Trail [5]: AAE
// Trail [6]: AAF
// The password is AAF
// Found after 6 Trail(s)

#include <iostream>
#include <string>
using namespace std;

// Function to read 3-Letter Password
string ReadPassword()
{
	string Password;
	cout << "Please enter a 3-Letter Password (all capital) ";
	cin >> Password;
	return Password;
}

// Function to find the password
void FindPassword(string OriginalPassword)
{
	int counter = 0;
	for (char i = 'A'; i <= 'Z'; i++)
	{
		for (char j = 'A'; j <= 'Z'; j++)
		{
			for (char k = 'A'; k <= 'Z'; k++)
			{
				++counter;
				string word;
				word.push_back(i);
				word.push_back(j);
				word.push_back(k);
				cout << "Trail [" << counter << "]: " << word << endl;
				if (word == OriginalPassword)
				{
					cout << "The password is " << word << '\n';
					cout << "Found after " << counter << " Trail(s)\n";
					return;
				}
			}
		}
	}
	cout << "Password not found.\n";
}

// Main function
int main()
{
	FindPassword(ReadPassword());
	return 0;
}