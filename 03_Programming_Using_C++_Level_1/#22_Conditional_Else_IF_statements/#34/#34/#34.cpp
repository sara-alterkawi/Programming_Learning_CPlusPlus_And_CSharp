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
	if (totalSales > 1000000)
	{
		commission = totalSales * 0.01;
	}
	else if (totalSales >= 500000 && totalSales <= 1000000)
	{
		commission = totalSales * 0.02;
	}
	else if (totalSales >= 100000 && totalSales < 500000)
	{
		commission = totalSales * 0.03;
	}
	else if (totalSales > 50000 && totalSales < 100000)
	{
		commission = totalSales * 0.05;
	}
	else
	{
		commission = 0.0;
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