// Delete Record From File
// To delete a specific record from a file, you can read the file's content into a vector,
// remove the desired record from the vector, and then write the updated vector back to the file.
// Below is an example implementation in C++:

#include <iostream>
#include <fstream>
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

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out);

    if (MyFile.is_open())
    {
        for (string& Line : vFileContent)
        {
            if (Line != "")
            {
                MyFile << Line << endl;
            }
        }

        MyFile.close();
    }
}

void DeleteRecordFromFile(string FileName, string Record)
{
    vector <string> vFileContent;
    LoadDataFromFileToVector("MyFile.txt", vFileContent);

    for (string& Line : vFileContent)
    {
        if (Line == Record)
            Line = "";
    }

    SaveVectorToFile("MyFile.txt", vFileContent);
}

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
    cout << "File Content Before Delete:\n";
    PrintFileContent("MyFile.txt");

    DeleteRecordFromFile("MyFile.txt", "Ali");

    cout << "\n\nFile Content after Delete:\n";
    PrintFileContent("MyFile.txt");

    return 0;
}