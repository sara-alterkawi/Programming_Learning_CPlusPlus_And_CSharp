// Initializing 2D array
int[,] numbers = { { 12, 13 }, { 55, 77 } };
Console.WriteLine("2D Array Elements : ");
for (int i = 0; i < numbers.GetLength(0); i++)
{
    for (int j = 0; j < numbers.GetLength(1); j++)
    {
        Console.Write(numbers[i, j] + " ");
    }
    Console.WriteLine();
}

// Access first element from the first row
Console.WriteLine("Element at index [0, 0] : " + numbers[0, 0]);

// Access first element from second row
Console.WriteLine("Element at index [1, 0] : " + numbers[1, 0]);

Console.ReadKey();