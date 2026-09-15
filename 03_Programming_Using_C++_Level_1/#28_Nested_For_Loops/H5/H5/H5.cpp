// Write a program that prints in first line A, in second line from A B, and so on until the last line with numbers from A to Z.
#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
	for (char i = 'A'; i <= 'F'; i++)
	{
		for (char j = 'A'; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}