// Write a program to read a number from userand check if it is a prime or not and print the result.
// Note : prime number can only divide on one and on itself.

#include <iostream>
#include <string>
using namespace std;

// Enum to represent whether a number is prime or not
enum enPrimeOrNot
{
    Prime = 1, NotPrime = 2
};

// Function to read a number from the user
int readNumber()
{
    int Numb;
    do
    {
        cout << "Enter positiv numbers: " << endl;
        cin >> Numb;
    } while (Numb <= 0);
  
    return Numb;
}

// Function to check if number is prime
enPrimeOrNot checkPrime(int numb)
{
    if (numb < 2)
        return enPrimeOrNot::NotPrime;
    for (int i = 2; i <= numb / 2; i++)
    {
        if (numb % i == 0)
            return enPrimeOrNot::NotPrime;
    }
    return enPrimeOrNot::Prime;
}

// function to print the result
void printResult(int number, enPrimeOrNot result)
{
    if (result == Prime)
        cout << number << " is a Prime number." << endl;
    else
        cout << number << " is NOT a Prime number." << endl;
}

// Main Function
int main()
{
    int number = readNumber();
    enPrimeOrNot result = checkPrime(number);
    printResult(number, result);
    return 0;
}