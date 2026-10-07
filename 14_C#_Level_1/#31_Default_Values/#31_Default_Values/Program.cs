// Get default value using default(type)
int i = default(int); // 0
Console.WriteLine(i);

float f = default(float); // 0
Console.WriteLine(f);

decimal d = default(decimal); // 0
Console.WriteLine(d);

bool b = default(bool); // false
Console.WriteLine(b);

char c = default(char); // '\0'
Console.WriteLine(c);

// C# 7.1 onwards
// Get default value using default
int i2 = default; // 0
Console.WriteLine(i2);

float f2 = default; // 0
Console.WriteLine(f2);

decimal d2 = default; // 0
Console.WriteLine(d2);

bool b2 = default; // false
Console.WriteLine(b2);

char c2 = default; // '\0'
Console.WriteLine(c2);

Console.ReadKey();