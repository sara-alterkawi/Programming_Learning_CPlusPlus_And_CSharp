// Update Record In File
// To update a record in a file, we need to read the file content into a vector,
// then search for the record we want to update, change it, and finally write the updated vector back to the file.

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

void DeleteRecordFromFile(string FileName, string Record, string UpdateTo)
{
    vector <string> vFileContent;
    LoadDataFromFileToVector("MyFile.txt", vFileContent);

    for (string& Line : vFileContent)
    {
        if (Line == Record)
            Line = UpdateTo;
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
    cout << "File Content Before Update:\n";
    PrintFileContent("MyFile.txt");

    DeleteRecordFromFile("MyFile.txt", "Ali", "Alia");

    cout << "\n\nFile Content after Update:\n";
    PrintFileContent("MyFile.txt");

    return 0;
}