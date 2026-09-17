// Piggy Bank Calculator.

#include <iostream>
#include <string>
using namespace std;

// Structure that represents the piggy bank contents
struct stPiggyBank
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

// Function to read piggy bank contents from the user
stPiggyBank readPiggyBank()
{
    stPiggyBank PiggyBank;
    cout << "Please enter a Pennies" << endl;
    cin >> PiggyBank.Pennies;
    cout << "Please enter a Nickels" << endl;
    cin >> PiggyBank.Nickels;
    cout << "Please enter a Dimes" << endl;
    cin >> PiggyBank.Dimes;
    cout << "Please enter a Quarters" << endl;
    cin >> PiggyBank.Quarters;
    cout << "Please enter a Dollars" << endl;
    cin >> PiggyBank.Dollars;
    return PiggyBank;
}

// Function to calculate the total value in pennies
int calculateTotalPennies(stPiggyBank PigPiggyBank)
{
    int TotalPennies = PigPiggyBank.Pennies
                     + PigPiggyBank.Nickels * 5
                     + PigPiggyBank.Dimes * 10
                     + PigPiggyBank.Quarters * 25
                     + PigPiggyBank.Dollars * 100;
    return TotalPennies;

}

// Function to print the results
void printResult(int TotalPennies)
{
    float TotalDollars = TotalPennies / 100.0;

    cout << endl << "The Total Pennies = " << TotalPennies << endl;
    cout << "The Total Dollars = " << TotalDollars << endl;
}

// Main Function
int main()
{
    printResult(calculateTotalPennies(readPiggyBank()));
    return 0;
}
