// Bitwise OR operator (|) between two integers
// The two integers are 12 or 25
// The expected output is 29 result of the bitwise OR operation between 12 and 25
// Explanation:
// The compiler convert the numbers to binary and perform the bitwise OR operation
// 12 in binary is 00001100
// 25 in binary is 00011001
// Bitwise OR operation:
//   00001100
// | 00011001
//--------------
//   00011101 = 29 in decimal

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Result:" << (12 | 25);
}