// Write a program to read the ATME code from the user then check if PIN Code == 1234 then show the balance to user
// else show "Invalid PIN Code" and ask user to enter the PIN Code again until the user enters the correct PIN Code.
// the balance is 7500$.

#include <iostream>
#include <string>
using namespace std;

void checkPIN()
{
    int correctPIN = 1234;
    int balance = 7500;
    int userPIN;
    while (true)
    {
        cout << "Please enter your PIN Code: ";
        cin >> userPIN;
        if (userPIN == correctPIN)
        {
            cout << "Your balance is: " << balance << "$" << endl;
            break;
        }
        else
        {
            cout << "Invalid PIN Code. Please try again." << endl;
        }
    }
}

int main()
{
    checkPIN();
	return 0;
}
