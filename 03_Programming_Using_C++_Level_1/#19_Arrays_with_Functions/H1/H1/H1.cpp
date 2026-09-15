// Arrays and functions
#include <iostream>
#include <string>
using namespace std;

// Function to read grades into an array
void ReadGrades(float Grades[3])
{
	cout << "Please enter Grade1: \n";
	cin >> Grades[0];
	cout << "Please enter Grade2: \n";
	cin >> Grades[1];
	cout << "Please enter Grade3: \n";
	cin >> Grades[2];
}

// Function to calculate average of grades
float CalculateAvgGrades(float Grades[3])
{
	return (Grades[0] + Grades[1] + Grades[2]) / 3;
}

// Main function
int main()
{
	float Grades[3];
	ReadGrades(Grades);
	cout << "The average of grade is: " << CalculateAvgGrades(Grades) << endl;
    return 0;
}
