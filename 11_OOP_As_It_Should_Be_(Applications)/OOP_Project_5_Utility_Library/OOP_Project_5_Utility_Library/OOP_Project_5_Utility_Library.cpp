// Utility Library
// This project is intended to create a Utility Library with the following requirements:
// 1. Random Number Generation
// 2. Random Character Generation
// 3. Random Word Generation
// 4. Random Key Generation
// 5. Swap Functionality
// 6. Array Shuffling
// 7. Array Filling with Random Data
// 8. Text Encryption and Decryption

#include <iostream>
#include "clsUtil.h"

int main()
{
	clsUtil::Srand();
	cout << "Random Number: " << clsUtil::RandomNumber(1, 10) << endl;
	cout << "--------------------------------" << endl;
	cout << "Random Char: " << clsUtil::GetRandomCharacter(clsUtil::MixChar) << endl;
	cout << "--------------------------------" << endl;
	cout << "Random Capital Char: " << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << endl;
	cout << "--------------------------------" << endl;
	cout << "Random Word: " << clsUtil::GenerateWord(clsUtil::MixChar, 8) << endl;
	cout << "--------------------------------" << endl;
	cout << "Random Key: " << clsUtil::GenerateKey(clsUtil::MixChar) << endl;
	cout << "--------------------------------" << endl;
	cout << "Random Keys: " << endl;
	clsUtil::GenerateKeys(10, clsUtil::MixChar);
	cout << "================================================" << endl;
	// Swap Int
	int a = 10, b = 20;
	cout << "Numbers before Swap" << endl;
	cout << "A = " << a << " " << "B = " << b << endl;
	cout << "--------------------------------" << endl;
	clsUtil::Swap(a, b);
	cout << "Numbers after Swap" << endl;
	cout << "A = " << a << " " << "B = " << b << endl;
	cout << "================================================" << endl;
	// Swap double
	double c = 10.5, d = 20.5;
	cout << "Numbers before Swap" << endl;
	cout << "C = " << c << " " << "D = " << d << endl;
	cout << "--------------------------------" << endl;
	clsUtil::Swap(c, d);
	cout << "Numbers after Swap" << endl;
	cout << "C = " << c << " " << "D = " << d << endl;
	cout << "================================================" << endl;
	// Swap string
	string s1 = "Hello", s2 = "World";
	cout << "Text before Swap" << endl;
	cout << s1 << " " << s2 << endl;
	cout << "--------------------------------" << endl;
	clsUtil::Swap(s1, s2);
	cout << "Text after Swap" << endl;
	cout << s1 << " " << s2 << endl;
	cout << "================================================" << endl;
	// Swap dates
	clsDate d1(2023, 1, 1), d2(2024, 2, 2);
	cout << "Dates before Swap" << endl;
	cout << "Date1: " << d1.DateToString() << ", " << "Date2: " << d2.DateToString() << endl;
	cout << "--------------------------------" << endl;
	clsUtil::Swap(d1, d2);
	cout << "Dates after Swap" << endl;
	cout << "Date1: " << d1.DateToString() << ", " << "Date2: " << d2.DateToString() << endl;
	cout << "================================================" << endl;
	// Shuffle Array
	int Arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }" << endl;
	cout << "--------------------------------" << endl;
	clsUtil::ShuffleArray(Arr1, 10);
	cout << "Array after shuffle" << endl << "Arr1[10] = {";
	for (int i = 0; i < 10; i++)
	{
		cout << Arr1[i];
		if (i < 9)
			cout << ", ";
	}
	cout << " }" << endl;
	cout << "================================================" << endl;
	// String Array
	string Arr2[5] = { "Apple", "Banana", "Cherry", "Date" , "Orange" };
	cout << "Arr2[5] = { Apple, Banana, Cherry, Date , Orange }" << endl;
	clsUtil::ShuffleArray(Arr2, 5);
	cout << "Array after shuffle" << endl << "Arr2[5] = {";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr2[i];
		if (i < 4)
			cout << ", ";
	}
	cout << "}" << endl;
	cout << "================================================" << endl;
	int Arr3[5];
	clsUtil::FillArrayWithRandomNumbers(Arr3, 5, 20, 50);
	cout << "Array filled with random numbers:" << endl;
	cout << "Arr3[5] = { ";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr3[i];
		if (i < 4)
			cout << ", ";
	}
	cout << " }" << endl;
	cout << "================================================" << endl;
	string Arr4[5];
	clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChar, 6);
	cout << "Array filled with random words:" << endl;
	cout << "Arr4[5] = { ";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr4[i];
		if (i < 4)
			cout << ", ";
	}
	cout << " }" << endl;
	cout << "================================================" << endl;
	string Arr5[5];
	clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChar);
	cout << "Array filled with random keys" << endl;
	cout << "Arr5[5] = { ";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr5[i];
		if (i < 4)
			cout << ", ";
	}
	cout << " }" << endl;
	cout << "================================================" << endl;
	cout << "Using 5 Tabs" << endl;
	cout << endl << "Text1" << clsUtil::Tabs(5) << "Text2" << endl;
	cout << "================================================" << endl;
	const int EncryptionKey = 2;
	string TextAfterEncryption, TextAfterDecryption;
	string Text = "Hello World!";
	cout << "Original Text: " << Text << endl;
	cout << "--------------------------------" << endl;
	TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
	cout << "Text After Encryption: " << TextAfterEncryption << endl;
	cout << "--------------------------------" << endl;
	TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);
	cout << "Text After Decryption: " << TextAfterDecryption << endl;
	cout << "================================================" << endl;
	system("pause>0");
	return 0;
}