// This code is to demonstrate the use of union in C++
#include <iostream>
// Define a union with different data types
union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};
// Main function
int main() {
    MyUnion myUnion;
    myUnion.intValue = 42;
    std::cout << "Integer value: " << myUnion.intValue << std::endl;
    myUnion.floatValue = 3.14f;
    std::cout << "Float value: " << myUnion.floatValue << std::endl;
    myUnion.charValue = 'A';
    std::cout << "Char value: " << myUnion.charValue << std::endl;
    return 0;
}