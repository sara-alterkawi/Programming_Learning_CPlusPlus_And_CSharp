// Load Data From File to Vector
// This code demonstrates how to read data from a text file and store each line into a vector of strings.
// It includes a function to handle file reading and populating the vector, as well as a main function to test this functionality.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void LoadDataFromFileToVector(string fileName, vector <string>& vFileContent)
{
    fstream MyFile;

    MyFile.open(fileName, ios::in); // read mode

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }

        MyFile.close();
    }
}

int main() {
    vector <string> vFileContent;

    LoadDataFromFileToVector("MyFile.txt", vFileContent);

    for (string vElement : vFileContent)
        cout << vElement << endl;

    return 0;
}