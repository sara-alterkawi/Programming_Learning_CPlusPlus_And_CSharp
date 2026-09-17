// Write a program to read the ATME code from the user then check if PIN Code == 1234 then show the balance to user
// else show "Invalid PIN Code" and allow the user to enter the PIN Code three times.
// if he enterd the code wrong for three times show a message your card is blocked.
// the balance is 7500$.

#include <iostream>
#include <string>
using namespace std;

// Function to read the PIN code from the user
string ReadPinCode()
{
    string PinCode;
    cout << "Enter your PIN Code: ";
    cin >> PinCode;
    return PinCode;
}

// Function to check login and show balance or block card
void CheckAndShowBalance(double Balance)
{
    const string CorrectPin = "1234";
    int Trials = 0;
    string PinCode;

    while (Trials < 3)
    {
        PinCode = ReadPinCode();

        if (PinCode == CorrectPin)
        {
            system("color 2F");
            cout << "Your account balance is $" << Balance << endl;
            return;
        }
        else
        {
            Trials++;
            cout << "Invalid PIN Code (" << Trials << "/3)" << endl;
            system("color 4F");
        }
    }

    cout << "Your card is blocked." << endl;
}

// Main function
int main()
{
    CheckAndShowBalance(7500);
    return 0;
}