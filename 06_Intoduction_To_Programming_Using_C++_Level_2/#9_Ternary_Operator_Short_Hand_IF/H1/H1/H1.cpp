// Ternary Operator in C++
// Writ a program to check whether a number is positive or negative using the ternary operator.

#include<iostream>
using namespace std; 
int main() 
{ 
	int Number = 1;
	string Result;  
	Result = (Number > 0) ? "Positive" : "Negative"; 
	cout << "Number is " << Result << endl; 
	return 0; } 