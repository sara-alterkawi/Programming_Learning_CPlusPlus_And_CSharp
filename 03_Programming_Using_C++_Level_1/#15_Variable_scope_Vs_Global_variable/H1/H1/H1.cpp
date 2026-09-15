// Variables scope: Local and Global
#include <iostream>
#include <string>

using namespace std;
int x = 30; // Global Variable

// Function
void MyFunction1()
{
	int x = 20; // Local Variable
	cout << "The value of x inside function is: " << x << endl;
}

int main()
{
	int x = 10; // Local Variable
	cout << "The value of x inside main is: " << x << endl;
	MyFunction1();
	cout << "The Global value of x is: " << ::x << endl;
    return 0;
}
