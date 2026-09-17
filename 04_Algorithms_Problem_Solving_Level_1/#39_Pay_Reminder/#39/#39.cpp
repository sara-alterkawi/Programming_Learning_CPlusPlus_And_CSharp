// Pay Remin.
// Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
// input 20, 50 output 30

#include <iostream>
#include <string>
using namespace std;

// Structure to store bill info
struct stBill
{
    int TotalBill;
    int CashPaid;
};

// Function to read TotalBill and CashPaid from the user
stBill readInput()
{
    stBill bill;
    cout << "Please enter Total Bill: ";
    cin >> bill.TotalBill;

    cout << "Please enter Cash Paid: ";
    cin >> bill.CashPaid;

    return bill;
}

// Function to calculate the remainder
int calculateReminder(int TotalBill, int CashPaid)
{
    return CashPaid - TotalBill;
}

// Function to print the result
void printReminder(int Reminder)
{
    cout << "The Remainder = " << Reminder << endl;
}

// Main function
int main()
{
    stBill bill = readInput();
    printReminder(calculateReminder(bill.TotalBill, bill.CashPaid));
    return 0;
}
