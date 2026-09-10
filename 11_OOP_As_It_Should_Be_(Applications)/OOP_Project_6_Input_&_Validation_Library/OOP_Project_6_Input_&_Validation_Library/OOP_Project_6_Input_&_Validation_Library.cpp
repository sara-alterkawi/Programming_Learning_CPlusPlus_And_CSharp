// Validation Library
// This project is intended to create a Input & Validation Library with the following requirements:
// 1. Create a class named clsInputValidate in a file named cLsInputValidate.h
// 2. The class should contain the following static functions:
//	a. IsNumberBetween - to check if a number is between two numbers
//	b. IsDateBetween - to check if a date is between two dates
//	c. ReadIntNumber - to read an integer number from the user with validation
//	d. ReadIntNumberBetween - to read an integer number from the user within a range with validation
//	e. ReadDblNumber - to read a double number from the user with validation
//	f. ReadDblNumberBetween - to read a double number from the user within a range with validation
//	g. IsValidDate - to check if a date is valid

#include <iostream>
#include "cLsInputValidate.h"
using namespace std;

int main()
{
	cout << "Is Number 5 Between 1 and 10 ? " << endl;
    cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;
    cout << "--------------------------------" << endl;
	cout << "Is Number 5.5 Between 1.3 and 10.8 ? " << endl;
    cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << endl;
    cout << "--------------------------------" << endl;
	cout << "Is Date 1/9/2025 Between 1/9/2025 and 10/9/2025 ? " << endl;
    cout << clsInputValidate::IsDateBetween(clsDate(),
        clsDate(1, 9, 2025),
        clsDate(10, 9, 2025)) << endl;
    cout << "================================================" << endl;
    cout << "Please Enter a Number:" << endl;
    int x = clsInputValidate::ReadIntNumber("Invalid Number, Enter again:\n");
    cout << "X = " << x << endl;
    cout << "================================================" << endl;
    cout << "Please Enter a Number between 1 and 5:" << endl;
    int y = clsInputValidate::ReadIntNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "Y = " << y << endl;
    cout << "================================================" << endl;
    cout << "Please Enter a Double Number:" << endl;
    double a = clsInputValidate::ReadDblNumber("Invalid Number, Enter again:\n");
    cout << "A = " << a << endl;
    cout << "================================================" << endl;
    cout << "Please Enter a Double Number between 1 and 5:" << endl;
    double b = clsInputValidate::ReadDblNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "B = " << b << endl;
    cout << "================================================" << endl;
	cout << "Is Date 29/2/2020 Valid ? " << endl;
    cout << endl << clsInputValidate::IsValidDate(clsDate(35, 12, 2022)) << endl;
    cout << "================================================" << endl;
    system("pause>0");
    return 0;
}