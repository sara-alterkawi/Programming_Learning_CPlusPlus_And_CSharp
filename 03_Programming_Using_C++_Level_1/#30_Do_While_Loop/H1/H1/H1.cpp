#include <iostream>
using namespace std;

int ReadNumberInRangeWhile(int min, int max)
{
    int Number;
    cout << "Please Enter a number between " << min << " and " << max << ": ";
    cin >> Number;

    while (Number < min || Number > max)
    {
        cout << "Wrong! The Number is out of range." << endl;
        cout << "Please Enter a number between " << min << " and " << max << ": ";
        cin >> Number;
    }
    return Number;
}

int ReadNumberInRangeDo(int min, int max)
{
    int Number;
	do
    {
        cout << "Please Enter a number between " << min << " and " << max << ": ";
        cin >> Number;
	}
    while (Number < min || Number > max);
    return Number;
}

// Main function
int main()
{
    //cout << "You entered: " << ReadNumberInRangeWhile(18, 45) << endl;
    cout << "You entered: " << ReadNumberInRangeDo(18, 45) << endl;
    return 0;
}