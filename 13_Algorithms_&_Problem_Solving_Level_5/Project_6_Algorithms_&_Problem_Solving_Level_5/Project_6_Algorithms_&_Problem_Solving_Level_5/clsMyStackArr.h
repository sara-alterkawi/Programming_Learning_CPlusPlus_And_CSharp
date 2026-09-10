#pragma once
#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;
template <class T>
// Stack class implemented using a Dynamic Array through inheritance
class clsMyStackArr : public clsMyQueueArr<T> {
public:
    // Adds a new item to the top of the Stack.
    void push(T Item) {
        clsMyQueueArr<T>::_MyList.InsertAtBeginning(Item);
    }
    // Returns the top item of the Stack.
    T Top() {
        return clsMyQueueArr<T>::front();
    }
    // Returns the bottom item of the Stack.
    T Bottom() {
        return clsMyQueueArr<T>::back();
    }
};