// Forward loop
Console.WriteLine("\nForward Loop:");
for (int i = 1; i <= 10; i++)
{
    Console.WriteLine(i);
}

// Backword loop
Console.WriteLine("\nBackword Loop:");
for (int i = 10; i >= 1; i--)
{
    Console.WriteLine(i);
}

// Nested loop
Console.WriteLine("\nNested Loops:");
for (int i = 1; i <= 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        Console.WriteLine("i={0} and j={1}", i, j);
    }
}

Console.ReadKey();