// Write Mode Write Data To File
// This program demonstrates how to write data to a file using fstream in C++.
// It opens a file in write mode, writes multiple lines of text to it, and then closes the file.

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out);

    //Write Mode
    if (MyFile.is_open())
    {
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";
        MyFile.close();
    }

    return 0;
}