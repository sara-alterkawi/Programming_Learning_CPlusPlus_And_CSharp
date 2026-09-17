// Write a program to read a LoanAmount and MonthlyPayment and calculate how many months nee to settle the loan.
// Ex. Input 5000, 500 output 10 Months.

#include <iostream>
using namespace std;
#include <cmath>

struct LoanInfo
{
    double LoanAmount;
    double MonthlyPayment;
};

// Function to read inputs
LoanInfo ReadInputs()
{
    LoanInfo info;
    cout << "Please enter Loan Amount: ";
    cin >> info.LoanAmount;

    cout << "Please enter Monthly Payment: ";
    cin >> info.MonthlyPayment;

    return info;
}

// Function to calculate number of months needed
double CalculateTotalMonths(double LoanAmount, double MonthlyInstalment)
{
    return LoanAmount / MonthlyInstalment;
}

//
void PrintResult(double  TotalMonths)
{
    cout << "You will need " << TotalMonths << " months to pay off the loan." << endl;
}
int main()
{
    LoanInfo info = ReadInputs();
    PrintResult(CalculateTotalMonths(info.LoanAmount, info.MonthlyPayment));
    return 0;
}
