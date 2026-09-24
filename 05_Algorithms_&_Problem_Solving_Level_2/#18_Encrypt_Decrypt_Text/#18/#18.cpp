// Write a program to read a text and encrypt it, decrypt it:
// Input
// Sara
// Output		
// Text Before encryption: Sara
// Text After encryption: Uctc
// Text After decryption : Sara

#include <iostream>
#include <string>
using namespace std;

// Function to read 3-Letter Password
string ReadText()
{
	string text;
	cout << "Please enter your Text ";
	getline(cin, text);
	return text;
}

// Function to encrypt text
string EncryptText(string text, short encryptionKey)
{
	for (int i = 0; i < text.length(); i++)
		text[i] = char((int)text[i] + encryptionKey);
	return text;
}

// Function to decrypt text
string DecryptText(string text, short encryptionKey)
{
	for (int i = 0; i < text.length(); i++)
		text[i] = char((int)text[i] - encryptionKey);
	return text;
}

// Main function
int main()
{
	string text = ReadText();
	short key = 2;
	cout << "Text Before encryption: " << text << endl;

	string encrypted = EncryptText(text, key);
	cout << "Text After encryption: " << encrypted << endl;

	string decrypted = DecryptText(encrypted, key);
	cout << "Text After decryption: " << decrypted << endl;

	return 0;
}