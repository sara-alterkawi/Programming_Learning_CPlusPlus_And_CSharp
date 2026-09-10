// String Library Project
// This project is intended to create a String Library with the following requirements:
// 1. Create a class named clsString
// 2. The class should have a private data member to store the string value.
// 3. Implement a method named CountWords that counts the number of words in the string.
// 4. The Count Letters in that string.
// 5. Capitalize the first letter of each word in the string.
// 6. Count Capital Letters in the string.
// 7. Count Small Letters in the string.
// 8. Count Special Characters in the string.
// 9. Count Words in the string.
// 10. Count vowels in the string.
// 11. Invert all letters in the string.
// 12. Check if the letter is a vowel or not.
// 13. To goin a string array into a single string with a specified delimiter.
// 14. Remove punctuation from the string.
// 15. Replace a specific word in the string with another word.
// 16. Reverse the order of words in the string.
// 17. Split the string into an array of words based on a specified delimiter.
// 18. Trim leading and trailing whitespace from the string.
// 19. Trim space from right side of the string.
// 20. Trim space from left side of the string.
// 21. Convert the string to uppercase.
// 22. Convert the string to lowercase.
// 23. Convert the first letter of the string to uppercase.

#include <iostream>
#include "clsString.h"
using namespace std;
// Main Function
int main()
{
	clsString String1("Sara Alterkawi");
    cout << "String     = " << String1.Value << endl;
    cout << "Number of words: " << String1.CountWords() << endl;
    cout << "Number of words: " << String1.CountWords("Sara Omar Awad Alterkawi") << endl;
    cout << "------------------------------------------------" << endl;

	clsString String2;
	String2.Value = "Ahmad Aljasem";
    cout << "String     = " << String2.Value << endl;
    cout << "Number of words: " << String2.CountWords() << endl;
	cout << "Number of words: "	<< String2.CountWords("Ahmad Abdulhadi Aljasem") << endl;
    cout << "------------------------------------------------" << endl;

    clsString String3("hi how are you?");
    cout << "String     = " << String3.Value << endl;
    cout << "String Length = " << String3.Length() << endl;
    cout << "------------------------------------------------" << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    String3.UpperAllString();
    cout << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    String3.LowerAllString();
    cout << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    String3.Value = "Hamoudi";
    cout << "String     = " << String3.Value << endl;
    String3.InvertSpecificLetter('h');
    cout << "String 3 After inverting h: " << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    String3.Value = "Aboudi";
    cout << "String     = " << String3.Value << endl;
    String3.InvertAllLettersCase();
    cout << "String 3 After inverting all letters case: " << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    String3.Value = "I live in Sewden";
    cout << "String     = " << String3.Value << endl;
    cout << "Capital Letters count: " << String3.CountCapitalLetters() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "String     = " << String3.Value << endl;
    cout << "Small Letters count: " << String3.CountSmallLetters() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "String     = " << String3.Value << endl;
    cout << "vowels count: " << String3.CountVowels() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "String     = " << String3.Value << endl;
    cout << "letter E count: " << String3.CountSpecificLetter('E', false) << endl;
    cout << "----------------" << endl;

    cout << "Words Count: " << String3.CountWords() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Is letter u vowel? " << clsString::IsVowel('u') << endl;
    cout << "------------------------------------------------" << endl;

    vector<string> vString;
    cout << "String     = " << String3.Value << endl;
    vString = String3.Split(" ");
    cout << "Tokens = " << vString.size() << endl;
    for (string& s : vString)
    {
        cout << s << endl;
    }
    cout << "------------------------------------------------" << endl;

    String3.Value = "    Sara Alterkawi     ";
    cout << "String     = " << String3.Value << endl;
    String3.TrimLeft();
    cout << "Trim Left  = " << String3.Value << endl;
    cout << "--------------------------------" << endl;
    String3.TrimRight();
    cout << "Trim Right = " << String3.Value << endl;
    cout << "--------------------------------" << endl;
    String3.Trim();
    cout << "Trim       = " << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    vector<string> vString1 = {"Hiba","Sara", "Fadia","Dooha","Awad" };
    cout << "Join String From Vector: " << endl << clsString::JoinString(vString1, " ") << endl;
    cout << "------------------------------------------------" << endl;

    string arrString[] = { "Hiba","Sara", "Fadia","Dooha","Awad" };
    cout << "Join String From array:" << endl << clsString::JoinString(arrString, 5, " ") << endl;
    cout << "------------------------------------------------" << endl;

    String3.Value = "Sara Omar Awad Alterkawi";
    cout << "String     = " << String3.Value << endl;
    String3.ReverseWordsInString();
    cout << "Reverse Words : " << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    String3.Value = "Sara Omar Awad Alterkawi";
    cout << "String     = " << String3.Value << endl;
    cout << "String after Replace: " << endl << String3.ReplaceWord("Sara", "Hiba") << endl;
    cout << "------------------------------------------------" << endl;

    String3.Value = "This is: a sample text, with punctuations.";
    cout << String3.Value << endl;
    String3.RemovePunctuations();
    cout << "String after remove Punctuations :" << endl << String3.Value << endl;
    cout << "------------------------------------------------" << endl;

    system("pause>0");
    return 0;
};

