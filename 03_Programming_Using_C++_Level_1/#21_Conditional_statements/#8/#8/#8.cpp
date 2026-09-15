// Write a program to ask the user to enter mark then print the pass if the mark is 50 or more otherwise print fail

#include <iostream>
#include <string>
using namespace std;

// print result based on mark
void printResult(int mark) {
    if (mark >= 50) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
}

// get user input
void getUserInput() {
    int mark;
    std::cout << "Enter your mark: ";
    std::cin >> mark;
    printResult(mark);
}

// main function
int main()
{
    getUserInput();
	return 0;
}