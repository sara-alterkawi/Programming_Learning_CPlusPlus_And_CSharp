// Service Fee and Sales Tax.
// Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on screen:
// Input 100, output 127.6

#include <iostream>
#include <string>
using namespace std;

// Function to read input from user
double readPositiveNumb()
{
    double BillValue = 0;
    do
    {
        cout << "Please enter Bill Value ";
        cin >> BillValue;
    } while (BillValue <= 0);
    return BillValue;
}

// Function to calculate the bill after servise and tax
double totalBillWithServiceAndTax(double TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}

// Function to print the TotalBill
void printTotalBill(double TotalBill)
{
    cout << endl << "The Total Bill = " << TotalBill << endl;

}
int main()
{
    printTotalBill(totalBillWithServiceAndTax(readPositiveNumb()));
    return 0;
}
