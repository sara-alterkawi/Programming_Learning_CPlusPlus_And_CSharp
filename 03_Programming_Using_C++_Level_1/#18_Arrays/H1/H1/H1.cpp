// Arrays and average calculation
#include <iostream>
#include <string>

using namespace std;


int main()
{
	float Grades[3];
	cout << "Please enter Grade1: \n";
	cin >> Grades[0];
	cout << "Please enter Grade2: \n";
	cin >> Grades[1];
	cout << "Please enter Grade3: \n";
	cin >> Grades[2];
	cout << "***********************************\n";
	cout << "The average of grade is: " << (Grades[0] + Grades[1] + Grades[2]) / 3 << endl;
    return 0;
}
