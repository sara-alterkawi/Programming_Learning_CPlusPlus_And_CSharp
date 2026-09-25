// Declaration Vs Definition of functions
// In C++, a function declaration tells the compiler about a function's name, return type,
// and parameters, but it does not provide the actual body of the function.
// A function definition, on the other hand, provides the complete implementation of the function, including its body.

#include <iostream>
#include <string>
using namespace std;

// function declarationvoid 
void add(int, int); 

int main() 
{    
	add(10, 20); return 0; 
} 
// function Definitionvoid
void add(int a, int b) 
{
	cout << (a + b); 
}