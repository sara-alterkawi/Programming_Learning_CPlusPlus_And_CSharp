// Call Stack/Call Hierarchy
// Function1 calls Function2
// Function2 calls Function3
// Function3 calls Function4

#include <iostream>
#include <string>
using namespace std;

void Function4() 
{ 
	cout << "Hi I'm function4 " << endl; 
} void Function3() { Function4(); 
} 

void Function2() 
{
	Function3(); 
} 

void Function1()
{ 
	Function2(); 
}

int main()
{
	Function1(); 
	return 0;
}