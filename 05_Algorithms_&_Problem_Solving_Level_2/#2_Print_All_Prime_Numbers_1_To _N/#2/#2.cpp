// Write a program to read a number N from user and print all prime numbers from 1 to N.
// Note : prime number can only divide on one and on itself.
// Ex: input 10, output 1 2 3 5 7

#include <iostream>
#include <string>
using namespace std;

// Enum to represent whether a number is prime or not
enum enPrimeOrNot
{
    Prime = 1, NotPrime = 2
};

// Function to read a number from the user
int ReadNumber()
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
enPrimeOrNot CheckPrime(int numb)
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
void PrintPrimeFrom1ToN(int number)
{
    cout << "Prime numbers From 1 to " << number << " are :" << endl;
    for (int i = 1; i <= number; i++)
    {
        if (CheckPrime(i) == Prime)
            cout << i << endl;
    }
    
}

// Main Function
int main()
{
    PrintPrimeFrom1ToN(ReadNumber());
    return 0;
}