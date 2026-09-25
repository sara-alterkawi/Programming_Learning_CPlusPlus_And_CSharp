// Appending text to a file
// To append text to an existing file, you need to open the file in append mode using the ios::app flag.
// This will ensure that new data is added to the end of the file without overwriting existing content.

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out | ios::app); //append Mode

    if (MyFile.is_open())
    {
        MyFile << "Hi, this is a  new line\n";
        MyFile << "Hi, this is another new line\n";

        MyFile.close(); // make sure to close opened file
    }

    return 0;
}