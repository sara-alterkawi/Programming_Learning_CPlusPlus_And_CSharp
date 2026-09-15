// Write a program to ask the userr to enter Mark1, Mark2 and Mark3. Then calculate the average of these three marks and print PASS if average is greater than or equal to 50, otherwise print FAIL.

#include <iostream>
#include <string>
using namespace std;

// function to check pass or fail
void checkPassFail(float mark1, float mark2, float mark3)
{
    float average = (mark1 + mark2 + mark3) / 3;
    if (average >= 50)
    {
        std::cout << "PASS\n";
    }
    else
    {
        std::cout << "FAIL\n";
    }
}

// function to get marks from user
void getMarksAndCheck()
{
    float mark1, mark2, mark3;
    std::cout << "Enter Mark1: ";
    std::cin >> mark1;
    std::cout << "Enter Mark2: ";
    std::cin >> mark2;
    std::cout << "Enter Mark3: ";
    std::cin >> mark3;
    checkPassFail(mark1, mark2, mark3);
}

// main function
int main()
{
    getMarksAndCheck();
	return 0;
}