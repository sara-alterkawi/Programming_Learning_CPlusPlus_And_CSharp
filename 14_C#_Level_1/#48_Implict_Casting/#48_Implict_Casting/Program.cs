// Implicit Casting (automatically) - converting a smaller type to a larger type size
int myInt = 17;
// Implicit casting from int to double
double myDouble = myInt;
// Explicit Casting (manually) - converting a larger type to a smaller size type
Console.WriteLine("MyInt: {0}", myInt);      // Outputs 17
Console.WriteLine("MyDouble cast from int: {0}", myDouble);   // Outputs 17

Console.ReadKey();