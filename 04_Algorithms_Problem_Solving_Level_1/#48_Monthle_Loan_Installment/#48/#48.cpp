// Write a program to read  LoanAmount and ask user how many Months need to settle the loan, then calculate the MonthlyInstalment amount.
// Ex. Inputs 5000, 10 output 500

#include <iostream>
using namespace std;
#include <cmath>

struct LoanInfo
{
    double LoanAmount;
    double Months;
};

// Function to read inputs
LoanInfo ReadInputs()
{
    LoanInfo info;
    cout << "Please enter Loan Amount: ";
    cin >> info.LoanAmount;

    cout << "Please enter how many Months you need to settle the loan: ";
    cin >> info.Months;

    return info;
}

// Function to calculate number of months needed
double CalculateMonthlyPayment(double LoanAmount, double Months)
{
    return LoanAmount / Months;
}

// Function to print result
void PrintResult(double MonthlyPayment)
{
    cout << "You will need to pay " << MonthlyPayment
        << " per month to settle the loan." << endl;
}

// Main Function
int main()
{
    LoanInfo info = ReadInputs();
    PrintResult(CalculateMonthlyPayment(info.LoanAmount, info.Months));
    return 0;
}
