#pragma once
#include <iostream>
#include "clsMyQueue.h"
using namespace std;
// Stack class implemented using a Queue.
template <class T>
// 
class  clsMyStack :public   clsMyQueue <T> {
public:
    // Adds a new item to the top of the Stack.
    void push(T Item) {
        clsMyQueue<T>::_MyList.InsertAtBeginning(Item);
    }
    // Returns the top item of the Stack.
    T Top() {
        return clsMyQueue<T>::front();
    }
    // Returns the bottom item of the Stack.
    T Bottom() {
        return clsMyQueue<T>::back();
    }
};