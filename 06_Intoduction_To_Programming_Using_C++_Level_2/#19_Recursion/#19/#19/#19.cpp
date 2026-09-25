// Recursion to print numbers from N to M
// Example: N=1, M=10
// Output: 1 2 3 4 5 6 7 8 9 10
// Explanation: The function PrintNumbersFromNtoM uses recursion to print numbers from N to M.

#include <iostream>
#include <string>
using namespace std;

void PrintNumbersFromNtoM(int N, int M) 
{
	if (N <= M) 
	{
		cout << N << endl;    
		PrintNumbersFromNtoM(N + 1, M); 
	} 
} 

int main() {
	PrintNumbersFromNtoM(1, 10); 
	return 0;
}