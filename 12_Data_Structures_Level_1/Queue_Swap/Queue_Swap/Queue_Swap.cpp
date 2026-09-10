// C++ program to demonstrate the swap() function of Queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	// Create a queue of integers
	queue<int> MyQueue1;
	queue<int> MyQueue2;
	// Push some elements into the first queue
	MyQueue1.push(10);
	MyQueue1.push(20);
	MyQueue1.push(30);
	MyQueue1.push(40);
	// Push some elements into the second queue
	MyQueue2.push(50);
	MyQueue2.push(60);
	MyQueue2.push(70);
	MyQueue2.push(80);
	// Using the swap() function to swap the contents of MyQueue1 and MyQueue2
	MyQueue1.swap(MyQueue2);
	// Display the contents of MyQueue1 after swapping
	cout << "Contents of MyQueue1 after swapping: ";
	while (!MyQueue1.empty()) {
		cout << MyQueue1.front() << " ";
		MyQueue1.pop();
	}
	cout << endl;
	// Display the contents of MyQueue2 after swapping
	cout << "Contents of MyQueue2 after swapping: ";
	while (!MyQueue2.empty()) {
		cout << MyQueue2.front() << " ";
		MyQueue2.pop();
	}
	cout << endl;
	system("pause>0");
	return 0;
}