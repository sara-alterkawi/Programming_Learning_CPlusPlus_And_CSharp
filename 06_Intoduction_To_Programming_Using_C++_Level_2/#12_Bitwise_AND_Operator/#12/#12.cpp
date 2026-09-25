// Bitwise AND operator (&) between two integers
// The two integers are 12 and 25
// The expected output is 8 result of the bitwise AND operation between 12 and 25
// Explanation:
// The compiler convert the numbers to binary and perform the bitwise AND operation
// 12 in binary is 00001100
// 25 in binary is 00011001
// Bitwise AND operation:
//   00001100
// & 00011001
//--------------
//   00001000 = 8 in decimal

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Result:" << (12 & 25);
}