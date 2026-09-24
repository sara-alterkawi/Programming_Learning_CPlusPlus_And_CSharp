// Write a program to read an integer number from the user and print half of it (as an integer).

#include <iostream>
#include <string>
using namespace std;

int readNumber()
{
	int Num;
    cout << "Please enter your number" << endl;
    cin >> Num;
	return Num;
}

float claculateHalveNumber(int Num)
{
    return (float)Num / 2;
}

void printNumber(int Num)
{
    cout << "Half of " << to_string(Num) <<" is: " << to_string(claculateHalveNumber(Num)) << endl;
}

int main()
{
	printNumber(readNumber());
    return 0;
}
