// Ternary Operator in C++ 
// Write a program to check if a number is positive, negative, or zero.

#include<iostream>
using namespace std;

main() 
{ 
	int Number = 0;
	string Result; 
	Result = (Number == 0) ? "Zero" : ((Number > 0) ? "Positive" : "Negative");  
	cout << "Number is " << Result;
	return 0;
}