int x, y;

Console.WriteLine("Enter a number X:");
x = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Enter a number Y:");
y = Convert.ToInt32(Console.ReadLine());
// Test one condition If statement
if (x == 0 && y == 0)
{
    Console.WriteLine("Both x and y are zero");
}

// Test multiple conditions If statement if else statement
if (x == 0 && y == 0)
{
    Console.WriteLine("Both x and y are zero");
}
else
{
    Console.WriteLine("Either x or y is not zero");
}

// Test multiple conditions If statement if else if statement
if (x == 0 && y == 0)
{
    Console.WriteLine("Both x and y are zero");
}
else if (x == 0)
{
    Console.WriteLine("x is zero");
}
else if (y == 0)
{
    Console.WriteLine("y is zero");
}
else
{
    Console.WriteLine("Neither x nor y is zero");
}

Console.ReadKey();