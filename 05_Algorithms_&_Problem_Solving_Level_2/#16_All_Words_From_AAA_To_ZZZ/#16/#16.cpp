// Write a program to print all words from AAA To ZZZ.
// Output		
// AAA
// AAB
// AAC
// :
// :
// :
// ZZZ

#include <iostream>
#include <string>
using namespace std;


// Function to make the inverted Number
void PrintLetter()
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char k = 'A'; k <= 'Z'; k++)
            {
                cout << i << j << k << endl;
            }
        }
        cout << "----------------" << endl;

    }
}

// Main function
int main()
{
	PrintLetter();
	return 0;
}