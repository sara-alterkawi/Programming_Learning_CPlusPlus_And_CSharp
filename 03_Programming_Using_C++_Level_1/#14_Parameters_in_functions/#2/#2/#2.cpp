// Read user name and print it on screen.
#include <iostream>
#include <string>

using namespace std;

// Function To Display my card info
string PrintName(string Name)
{

    return Name;
}

int main()
{
    string Name;
    cout << "Please enter Your Name:" << endl;
    cin >> Name;
    cout << endl << "Welcome " << PrintName(Name) << endl;
    return 0;
}
