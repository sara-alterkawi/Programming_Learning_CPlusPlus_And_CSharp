// The dynamic type is a type that bypasses static type checking.
// It allows you to store any type of value and perform operations on it without compile-time type checking.
// The actual type of the variable is determined at runtime.
// Declare dynamic Variable type int
dynamic MyDynamicVar = 100;
Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

// Declare dynamic Variable type string
MyDynamicVar = "Hello World!!";
Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

// Declare dynamic Variable type bool
MyDynamicVar = true;
Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

// Declare dynamic Variable type DateTime
MyDynamicVar = DateTime.Now;
Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

Console.ReadKey();