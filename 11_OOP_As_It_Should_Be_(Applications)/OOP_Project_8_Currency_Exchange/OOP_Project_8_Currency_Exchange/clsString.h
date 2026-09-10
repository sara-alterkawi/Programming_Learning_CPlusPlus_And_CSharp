#pragma once
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
class clsString
{
	// Private Data Members
private:
	string _Value;
	// Public Data Members
public:
	// Constructor
	clsString()
	{
		_Value = "";
	}
	// Parameterized Constructor
	clsString(string value)
	{
		_Value = value;
	}
	// Setter
	void SetValue(string value)
	{
		_Value = value;
	}
	// Getter
	string GetValue()
	{
		return _Value;
	}
	// Property to access _Value
	__declspec(property(get = GetValue, put = SetValue)) string Value;
	// Methods to Count Words the string
	short CountWords(const string& str)
	{
		stringstream ss(str);
		string word;
		short wordCount = 0;
		while (ss >> word)
		{
			wordCount++;
		}
		return wordCount;
	}
	// Overloaded Method to Count Words the string
	short CountWords()
	{
		return CountWords(_Value);
	};
	// Methods to Get Length
	static short Length(string str)
	{
		return str.length();
	};
	// Overloaded Method to Get Length
	short Length()
	{
		return _Value.length();
	};
	// Method to uppercase the first letter of each word in the current string
	string UpperFirstLetterOfEachWord(string str)
	{
		bool inWord = true;
		for (short i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && inWord)
			{
				str[i] = toupper(str[i]);
			}
			inWord = ((str[i] == ' ') ? true : false);
		}
		return str;
	}
	// Overloaded Method to uppercase the first letter of each word in the current string
	void  UpperFirstLetterOfEachWord()
	{
		_Value = UpperFirstLetterOfEachWord(_Value);
	}
	// Method to lowercase the first letter of each word in the string
	static string LowerFirstLetterOfEachWord(string str)
	{
		bool inWord = true;
		for (short i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && inWord)
			{
				str[i] = tolower(str[i]);
			}
			inWord = ((str[i] == ' ') ? true : false);
		}
		return str;
	}
	// Overloaded Method to lowercase the first letter of each word in the string
	void  LowerFirstLetterOfEachWord()
	{
		_Value = LowerFirstLetterOfEachWord(_Value);
	}
	// Method to convert all letters into uppercase
	static string UpperAllString(string str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			str[i] = toupper(str[i]);
		}
		return str;
	}
	// Overloaded Method to convert all letters into uppercase
	void  UpperAllString()
	{
		_Value = UpperAllString(_Value);
	}
	// Method to convert all letters into lowercase
	static string LowerAllString(string str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			str[i] = tolower(str[i]);
		}
		return str;
	}
	// Overloaded Method to convert all letters into lowercase
	void  LowerAllString()
	{
		_Value = LowerAllString(_Value);
	}
	// Function to invert the case of a character
	static char  InvertLetterCase(char char1)
	{
		return isupper(char1) ? tolower(char1) : toupper(char1);
	}
	// Method to invert the case of all letters in the current string
	static string InvertAllLettersCase(string str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			str[i] = InvertLetterCase(str[i]);
		}
		return str;
	}
	// Overloaded Method to invert the case of all letters in the current string
	void InvertAllLettersCase()
	{
		_Value = InvertAllLettersCase(_Value);
	}
	// Method to invert the case of a specific letter in the current string
	void InvertSpecificLetter(char char1)
	{
		for (short i = 0; i < _Value.length(); i++)
		{
			if (tolower(_Value[i]) == tolower(char1))
			{
				_Value[i] = InvertLetterCase(_Value[i]);
			}
		}
	}
	// Enumeration for letter case types
	enum enWhatToCount
	{
		SmallLetters = 0,
		CapitalLetters = 1,
		All = 3
	};
	// Method to count letters based on the specified type
	static short CountLetters(string str, enWhatToCount whatToCount)
	{
		short count = 0;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (whatToCount == SmallLetters && islower(str[i]))
			{
				count++;
			}
			else if (whatToCount == CapitalLetters && isupper(str[i]))
			{
				count++;
			}
			else if (whatToCount == All && isalpha(str[i]))
			{
				count++;
			}
		}
		return count;
	}
	// Method to count capital letters in the current string
	static short CountCapitalLetters(string str)
	{
		short count = 0;
		for (short i = 0; i < str.length(); i++)
		{
			if (isupper(str[i]))
			{
				count++;
			}
		}
		return count;
	}
	// Overloaded Method to count capital letters in the current string
	short CountCapitalLetters()
	{
		return CountCapitalLetters(_Value);
	}
	// Method to count small letters in the current string
	static short CountSmallLetters(string str)
	{
		short count = 0;
		for (short i = 0; i < str.length(); i++)
		{
			if (islower(str[i]))
			{
				count++;
			}
		}
		return count;
	}
	// Overloaded Method to count small letters in the current string
	short CountSmallLetters()
	{
		return CountSmallLetters(_Value);
	}
	// Method to count specific letter in the current string
	static short CountSpecificLetter(string str, char letter, bool matchCase = true)
	{
		short count = 0;
		for (short i = 0; i < str.length(); i++)
		{
			if ((matchCase && str[i] == letter) || (!matchCase && tolower(str[i]) == tolower(letter)))
			{
				count++;
			}
		}
		return count;
	}
	// Overloaded Method to count specific letter in the current string
	short CountSpecificLetter(char letter, bool matchCase = true)
	{
		return CountSpecificLetter(_Value, letter, matchCase);
	}
	// Method to check if a letter is a vowel
	static bool IsVowel(char ch)
	{
		ch = tolower(ch); // Convert to lowercase for uniformity
		return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
	}
	// Method to count vowels in the current string
	static short CountVowels(string& str)
	{
		short vowelCount = 0;
		for (short i = 0; i < str.length(); i++)
		{
			if (IsVowel(str[i]))
			{
				vowelCount++;
			}
		}
		return vowelCount;
	}
	// Overloaded Method to count vowels in the current string
	short CountVowels()
	{
		return CountVowels(_Value);
	}
	// Method to split a string into words based on a delimiter
	static vector<string> Split(string str, string delim)
	{
		vector<string> vString;
		short pos = 0;
		string sWord; // define a string variable
		// use find() function to get the position of the delimiters
		while ((pos = str.find(delim)) != std::string::npos)
		{
			sWord = str.substr(0, pos); // store the word
			//if (sWord != "")
				vString.push_back(sWord);
			str.erase(0, pos + delim.length());  /* erase() until positon and move to next word. */
		}
		if (str != "")
		{
			vString.push_back(str); // it adds last word of the string.
		}
		return vString;
	}
	// Overloaded Method to split a string into words based on a delimiter
	vector<string> Split(string delim)
	{
		return Split(_Value, delim);
	}
	// Method to trim left spaces
	static string TrimLeft(const string& str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
			{
				return str.substr(i, str.length() - i);
			}
		}
		return "";
	}
	// Overloaded Method to trim left spaces
	void TrimLeft()
	{
		_Value = TrimLeft(_Value);
	}
	// Method to trim right spaces
	static string TrimRight(const string& str)
	{
		for (short i = str.length() - 1; i >= 0; i--)
		{
			if (str[i] != ' ')
			{
				return str.substr(0, i + 1);
			}
		}
		return "";
	}
	// Overloaded Method to trim right spaces
	void TrimRight()
	{
		_Value = TrimRight(_Value);
	}
	// Method to trim both left and right spaces
	static string Trim(string str)
	{
		return (TrimLeft(TrimRight(str)));
	}
	// Overloaded Method to trim both left and right spaces
	void Trim()
	{
		_Value = Trim(_Value);
	}
	// Method to join vector of strings with a separator
	static string JoinString(vector<string> vec, string delim)
	{
		string result;
		for (string& s : vec)
		{
			result += s + delim;
		}
		return result.substr(0, result.length() - delim.length());
	}
	// Method to join array of strings with a separator
	static string JoinString(string arrString[], short length, string delim)
	{
		string str = "";
		for (short i = 0; i < length; i++)
		{
			str = str + arrString[i] + delim;
		}
		return str.substr(0, str.length() - delim.length());
	}
	// Method to reverse the order of words in the current string
	static string ReverseWordsInString(string str)
	{
		vector<string> vString;
		string s2 = "";
		vString = Split(str, " ");
		// declare iterator
		vector<string>::iterator iter = vString.end();
		while (iter != vString.begin())
		{
			--iter;
			s2 += *iter + " ";
		}
		s2 = s2.substr(0, s2.length() - 1); //remove last space.
		return s2;
	}
	// Overloaded Method to reverse the order of words in the current string
	void ReverseWordsInString()
	{
		_Value = ReverseWordsInString(_Value);
	}
	// Method to replace words in a string
	static string ReplaceWord(string str, string oldWord, string newWord, bool matchCase = true)
	{
		vector<string> vString = Split(str, " ");
		for (string& s : vString)
		{
			if (matchCase)
			{
				if (s == oldWord)
				{
					s = newWord;
				}
			}
			else
			{
				if (LowerAllString(s) == LowerAllString(oldWord))
				{
					s = newWord;
				}
			}
		}
		return JoinString(vString, " ");
	}
	// Overloaded Method to replace words in a string
	string ReplaceWord(string oldWord, string newWord, bool matchCase = true)
	{
		_Value = ReplaceWord(_Value, oldWord, newWord, matchCase);
		return _Value;
	}
	// Metod to remove punctuation from the string
	static string RemovePunctuations(string str)
	{
		string s2 = "";
		for (short i = 0; i < str.length(); i++)
		{
			if (!ispunct(str[i]))
			{
				s2 += str[i];
			}
		}
		return s2;
	}
	// Overloaded Method to remove punctuation from the string
	void RemovePunctuations()
	{
		_Value = RemovePunctuations(_Value);
	}
};