// C++ program to demonstrate the use of vector functions
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector <int> vNumbers;
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

	// Returns the first element of the vector
    cout << "First Element: " << vNumbers.front() << endl;

	// Returns the last element of the vector
    cout << "Last Element: " << vNumbers.back() << endl;

    // Returns the number of elements present in the vector   
    cout << "Size: " << vNumbers.size() << endl;

    // Check the overall size of a vector   
    cout << "Capacity : " << vNumbers.capacity() << endl;

    // Returns 1 (true) if the vector is empty    
    cout << "Empty : " << vNumbers.empty() << endl;

    return 0;
}