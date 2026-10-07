// Implicit casting (automatically) - converting a smaller type to a larger type size
double myDouble = 17.58;
// Manual casting: double to int
int myInt = (int)myDouble;

Console.WriteLine("Double value: {0}", myDouble);   // Outputs 17.58
Console.WriteLine("Int value cast from double: {0}", myInt);      // Outputs 17

Console.ReadKey();