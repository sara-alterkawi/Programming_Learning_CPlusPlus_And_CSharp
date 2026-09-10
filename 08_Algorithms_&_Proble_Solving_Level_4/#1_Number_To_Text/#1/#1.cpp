// Write a program to read a number and print the text of that number.
/*
	Example:
	Input:
	5843
	Output:
	Five Thousands Eight Hundreds Forty Three
*/

#include <iostream>
#include <string>
using namespace std;

// Function to read a number from user
int ReadNumber()
{
	int number;
	cout << "Enter a Number? ";
	cin >> number;
	return number;
}

// Function to print the text of a number
string NumberToText(int number)
{
	// Handle units
	if (number >= 0 && number <= 9)
	{
		string units[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
		return units[number] + " ";
	}
	// Handle teens
	if (number >= 10 && number <= 19)
	{
		string teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
		return teens[number - 10] + " ";
	}
	// Handle tens
	if (number >= 20 && number <= 99)
	{
		string tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
		return tens[number / 10] + " " + NumberToText(number % 10);
	}
	// Handle hundred
	if (number >= 100 && number <= 199)
	{
		return"One Hundred " + NumberToText(number % 100);
	}
	// Handle hundreds
	if (number >= 200 && number <= 999)
	{
		return NumberToText(number / 100) + "Hundreds " + NumberToText(number % 100);
	}
	// Handle thousand
	if (number >= 1000 && number <= 1999)
	{
		return "One Thousand " + NumberToText(number % 1000);
	}
	// Handle thousands
	if (number >= 2000 && number <= 999999)
	{
		return NumberToText(number / 1000) + "Thousands " + NumberToText(number % 1000);
	}
	// Handle million
	if (number >= 1000000 && number <= 1999999)
	{
		return "One Million " + NumberToText(number % 1000000);
	}
	// Handle millions
	if (number >= 2000000 && number <= 999999999)
	{
		return NumberToText(number / 1000000) + "Millions " + NumberToText(number % 1000000);
	}
	// Handle billion
	if (number >= 1000000000 && number <= 1999999999)
	{
		return "One Billion " + NumberToText(number % 1000000000);
	}
	// Handle billions
	else
	{
		return NumberToText(number / 1000000000) + "Billions " + NumberToText(number % 1000000000);

	}
}

// Main function
int main()
{
	int number = ReadNumber();
	cout << NumberToText(number);

	return 0;
}