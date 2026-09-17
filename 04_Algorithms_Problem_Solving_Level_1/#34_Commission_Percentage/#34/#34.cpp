// Write a program to ask the user to enter TotalSales the commission is calculated as follows:
// >1000000 1%
// 500000-1000000 2%
// 100000-500000 3%
// >50000-100000 5%
// otherwise 0%

#include <iostream>
#include <string>
using namespace std;

// Function to get user input
double readTotalSale()
{
    double totalSales;
    cout << "Enter Total Sales: ";
    cin >> totalSales;
    return totalSales;
}

// Function to determine commission rate
double getCommission(double totalSales)
{
    if (totalSales >= 1000000)
        return 0.01;
    else if (totalSales >= 500000)
        return 0.02;
    else if (totalSales >= 100000)
        return 0.03;
    else if (totalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}

// Function to calculate commission
double calculateCommission(double totalSale)
{
    return getCommission(totalSale) * totalSale;
}

// Function to print result
void printResult(double result)
{
    cout << "Commission = " << result << endl;
}

// Main function
int main()
{
    printResult(calculateCommission(readTotalSale()));
    return 0;
}