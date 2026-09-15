// Write a program to ask the user to enter TotalSales the commission is calculated as follows:
// >1000000 1%
// 500000-1000000 2%
// 100000-500000 3%
// >50000-100000 5%
// otherwise 0%

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void calculateCommission(double totalSales)
{
    double commission = 0.0;
    int category = 0;

    if (totalSales > 1000000)
        category = 1;
    else if (totalSales >= 500000 && totalSales <= 1000000)
        category = 2;
    else if (totalSales >= 100000 && totalSales < 500000)
        category = 3;
    else if (totalSales >= 50000 && totalSales < 100000)
        category = 4;
    else
        category = 5;

    switch (category)
    {
    case 1:
        commission = totalSales * 0.01;
        break;
    case 2:
        commission = totalSales * 0.02;
        break;
    case 3:
        commission = totalSales * 0.03;
        break;
    case 4:
        commission = totalSales * 0.05;
        break;
    default:
        commission = 0.0;
        break;
    }

    cout << "The commission is: " << commission << endl;
}

// Function to get user input
void getUserInput()
{
	double totalSales;
	cout << "Enter Total Sales: ";
	cin >> totalSales;
	calculateCommission(totalSales);
}


// Main function
int main()
{
	getUserInput();
	return 0;
}