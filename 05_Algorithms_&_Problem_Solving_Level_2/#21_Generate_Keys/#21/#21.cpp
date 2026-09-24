// Write a program to read how many keys to generate and print them on th screen.
// Input 5
// Output		
// Key[1] : GHYF-YGTL-CZZH-WAIC
// Key[2] : AUYH-OZYR-ONFH-CSFX
// Key[3] : GQUH-SOXW-SUAI-DPLX
// Key[4] : LLWJ-KVNF-KHGU-ABQC
// Key[5] : GRMK-UBZK-DEGV-BDZV


#include <iostream>
#include <string>
using namespace std;

enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

// Function to RandomNumber
int RandomNumber(int from, int to)
{
    int RandomNumb = rand() % (to - from + 1) + from;
    return RandomNumb;
}

// Function to GetRandomCharacter
char GetRandomCharacter(enCharType charType)
{
    switch (charType)
    {
    case SmallLetter:
        return char(RandomNumber('a', 'z'));
        break;
    case CapitalLetter:
        return char(RandomNumber('A', 'Z'));
        break;
    case Digit:
        return char(RandomNumber('0', '9'));
        break;
    case SpecialCharacter:
        return char(RandomNumber(33, 47));
        break;
    default:
        return '?';
    }
}

// Function to Read How manu keys Number from user
int ReadNumber(string message)
{
    int numb = 0;
    do
    {
        cout << message << endl;
        cin >> numb;
    } while (numb <= 0);
    return numb;
}

// Function to Generate Word
string GenerateWord(enCharType charType, short length)
{
    string word;
    for (int i = 1; i <= length; i++)
        word += GetRandomCharacter(charType);
    return word;
}

// Function to Generate Key
string GenerateKey()
{
    string key = "";
    key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4);
    return key;
}

// Function to GenerateKeys
void GenerateKeys(short numberOfKeys)
{
    for (int i = 1; i <= numberOfKeys; i++)
        cout << "Key [" << i << "] : " << GenerateKey() << endl;
}

// Main Function
int main()
{
    srand((unsigned)time(NULL));
    GenerateKeys(ReadNumber("Please enter how many keys to generate"));
    return 0;
}