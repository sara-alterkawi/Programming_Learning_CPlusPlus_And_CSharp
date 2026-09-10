// C++ program to demonstrate the working of queue
#include <queue>
#include <iostream>
using namespace std;
// Main function
int main()
{
    // Queue container declaration
    queue<int> MyQueue;
    // Pushing elements into first stack
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
	// Displaying the front element of the queue
    cout << "\nCount: " << MyQueue.size();
    cout << "\nFront: " << MyQueue.front();
    cout << "\nBack: " << MyQueue.back() << endl;
    cout << "\nMyQueue = ";
	// Popping elements from the queue
    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << " ";
        MyQueue.pop();

    }
    system("pause>0");
    return 0;
}