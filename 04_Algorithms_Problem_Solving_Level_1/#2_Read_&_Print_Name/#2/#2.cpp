// Read user name and print it on screen.
#include <iostream>
#include <string>
using namespace std;

// Function to read user name
string ReadName()
{
    string Name;
    cout << "Please Enter your name: ";
    getline(cin, Name);
    return Name;
}

// Function to print user name
void PrintName(string Name)
{
    cout << "************************" << endl;
    cout << "Your Name is: " << Name << "." << endl;
    cout << "************************" << endl;
}

// Main function
int main()
{
    PrintName(ReadName());
	return 0;
}


