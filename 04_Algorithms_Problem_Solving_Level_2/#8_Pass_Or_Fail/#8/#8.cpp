// Write a program to ask the user to enter mark then print the pass if the mark is 50 or more otherwise print fail

#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 0 };

int readMark() {
	int mark;
    cout << "Enter your mark: ";
    cin >> mark;
	return mark;
}


enPassFail checkPassFail(int mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
		return enPassFail::Fail;
}

void printResult(int mark) {
    if (checkPassFail(mark) == enPassFail::Pass)
        cout << "You have passed." << endl;
    else
        cout << "You have failed." << endl;
}
// main function
int main()
{
	printResult(readMark());
	return 0;
}