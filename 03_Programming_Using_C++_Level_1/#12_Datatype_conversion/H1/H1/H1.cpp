// Datatype_conversion.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string St1 = "43.22";

    double num_double = stod(St1);
    cout << endl << num_double << endl;

    float num_float = stof(St1);
    cout << endl << num_float << endl;

    int num_int = stoi(St1);
    cout << endl << num_int << endl;

    int N1 = 20;
    St1 = to_string(N1);
    cout << endl << St1 << endl;

    double N2 = 33.5;
    St1 = to_string(N2);
    cout << endl << St1 << endl;

    float N3 = 55.23;
    St1 = to_string(N3);
    cout << endl << St1 << endl;

    return 0;
}
