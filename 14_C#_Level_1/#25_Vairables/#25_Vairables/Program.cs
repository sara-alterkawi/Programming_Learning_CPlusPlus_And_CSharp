// String data type
string MyName = "Sara Alterkawi";
Console.WriteLine(MyName);

// Integer data type
int x = 10; int y = 20;
Console.WriteLine("x = " + x);
Console.WriteLine("y = " + y);
// This line will give wrong answer :-)
Console.WriteLine("x + y = " + x + y);
// This line will give right answer :-)
Console.WriteLine("x + y = " + (x + y));

// Other common data types
double MyDouble = 25.89D;
char MyLetter = 'M';
bool MyBool = true;

Console.ReadKey();