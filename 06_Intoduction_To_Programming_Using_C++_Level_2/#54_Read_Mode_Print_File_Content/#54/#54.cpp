// Read Mode: Print File Content
// To read a file and print its content to the console.
// The file to be read is "MyFile.txt".

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintFileContent(string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

int main()
{
    PrintFileContent("MyFile.txt");

    return 0;
}