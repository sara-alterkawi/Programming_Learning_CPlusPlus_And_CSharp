// Write a program that prints in first line AA second line AB third line AC and so on until ZZ
#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
	// Loop through the first letter from A to Z
	for (char i = 'A'; i <= 'Z'; i++)
	{
		// Loop through the second letter from A to Z
		for (char j = 'A'; j <= 'Z'; j++)
		{
			// Print the combination of the two letters
			cout << i << j << endl;
		}
		cout << "------------" << endl;
	}
	return 0;
}
