Console.Write("Enter a number to check if it's even or odd: ");
int number = int.Parse(Console.ReadLine());
string result;
// Using the ternary operator to check if the number is even or odd
result = (number % 2 == 0) ? "Even Number" : "Odd Number";
Console.WriteLine("{0} is {1}", number, result);

Console.ReadKey();