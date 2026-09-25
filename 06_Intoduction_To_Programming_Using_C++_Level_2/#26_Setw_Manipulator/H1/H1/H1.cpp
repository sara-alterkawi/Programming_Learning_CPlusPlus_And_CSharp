#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct stData
{
    string Name;
    int Age;
    string Job;
};

int ReadPersonCount()
{
    int PersonsCount = 5;
    cout << "Kindly Enter How many Persons you want to add: ";
    cin >> PersonsCount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // تصحيح هنا للتخلص من '\n'
    return PersonsCount;
}

void ReadPersonData(stData& Data)
{
    cout << "What is your name? ";
    getline(cin, Data.Name);

    cout << "How old are you? ";
    cin >> Data.Age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // للتأكد من تنظيف السطر

    cout << "What's your job? ";
    getline(cin, Data.Job);
}

void ReadAllPersons(stData Data[], int PersonCount)
{
    for (int i = 0; i < PersonCount; i++)
    {
        cout << "\n================================= Person " << i + 1 << " ================================" << endl;
        ReadPersonData(Data[i]);
    }
}

void DisplayPersonsTable(stData DataArr[], int PersonCount)
{
    cout << endl;
    cout << "|-------------------|---------|--------------|" << endl;
    cout << "|        Name       |    Age  |      Job     |" << endl;
    cout << "|-------------------|---------|--------------|" << endl;

    for (int i = 0; i < PersonCount; i++)
    {
        cout << "| " << setw(17) << left << DataArr[i].Name
            << " | " << setw(07) << left << DataArr[i].Age
            << " | " << setw(12) << left << DataArr[i].Job
            << " |" << endl;
        cout << "|-------------------|---------|--------------|" << endl;
    }
}

int main()
{
    int PersonCount = ReadPersonCount();
    stData Data[100];

    ReadAllPersons(Data, PersonCount);
    DisplayPersonsTable(Data, PersonCount);

    return 0;
}