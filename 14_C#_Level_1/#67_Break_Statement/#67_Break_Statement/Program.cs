int i = 1;
// Break statement
do
{
    Console.WriteLine("C# while Loop: Iteration {0}", i);

    if (i == 3)
        break;
    i++;
} while (i <= 5);
Console.ReadKey();