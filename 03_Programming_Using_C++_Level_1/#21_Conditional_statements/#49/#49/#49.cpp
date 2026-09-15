// write a program to read the ATM pin code and check if PIN Code = 1234 then show the balance to the user otherwise show "Invalid PIN Code" the Balance is 7500

#include <iostream>
#include <string>
using namespace std;

// Function to check the PIN code
void checkPin(int pin)
{
	int balance = 7500;
	if (pin == 1234)
	{
		cout << "Your balance is: " << balance << endl;
	}
	else
	{
		cout << "Invalid PIN Code" << endl;
	}
}

// Function to read the PIN code from the user
void readPin()
{
	int pin;
	cout << "Enter your PIN Code: ";
	cin >> pin;
	checkPin(pin);
}

// Main function
int main()
{
	readPin();
	return 0;
}
