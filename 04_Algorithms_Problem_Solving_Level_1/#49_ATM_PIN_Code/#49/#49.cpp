// write a program to read the ATM pin code and check if PIN Code = 1234
// then show the balance to the user otherwise show "Invalid PIN Code" the Balance is 7500

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

// Function to check the PIN code
bool LogIn()
{
	string PinCode;
	do
	{
		PinCode = ReadPinCode();
		if (PinCode == "1234")
			return true;
		else
		{
			cout << "Wrong PIN Code";
			system("color 4F");
		}
	} while (PinCode != "1234");
	return false;
}

// Function to check login and print balance or error
void CheckAndShowBalance(double Balance)
{
	string PinCode;
	do
	{
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			system("color 2F");
			cout << "Your account balance is " << Balance << endl;
			return;
		}
		else
		{
			cout << "Wrong PIN Code" << endl;
			system("color 4F");
		}
	} while (PinCode != "1234");
}

// Main function
int main()
{
	CheckAndShowBalance(7500);
	return 0;
}
