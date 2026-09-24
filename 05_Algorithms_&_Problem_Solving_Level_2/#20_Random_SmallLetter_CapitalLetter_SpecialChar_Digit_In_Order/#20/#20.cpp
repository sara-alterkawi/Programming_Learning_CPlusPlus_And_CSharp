// Write a program to print three random SmallLetter, CapitalLetter, SpecialCharacter and Digit in order.

// Output		
// i
// G
// &
// 7

#include <iostream>
#include <string>
using namespace std;

enum enCharType {
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialCharacter = 3,
	Digit = 4
};

// Function to RandomNumber
int RandomNumber(int from, int to)
{
	int RandomNumb = rand() % (to - from + 1) + from;
	return RandomNumb;
}

// Function to GetRandomCharacter
char GetRandomCharacter(enCharType charType)
{
    switch (charType)
    {
    case SmallLetter:
        return char(RandomNumber('a', 'z'));
        break;
    case CapitalLetter:
        return char(RandomNumber('A', 'Z'));
        break;
    case Digit:
        return char(RandomNumber('0', '9'));
        break;
    case SpecialCharacter:
        return char(RandomNumber(33, 47));
        break;
    default:
        return '?';
    }
}


// Main Function
int main()
{
	srand((unsigned)time(NULL));
	cout << GetRandomCharacter (enCharType::SmallLetter)<< endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;
	return 0;
}