// Create an array
int[] numbers = { 11, 12, 13 };

// Access first element
Console.WriteLine("Element in first index : " + numbers[0]);

// Access second element
Console.WriteLine("Element in second index : " + numbers[1]);

// Access third element
Console.WriteLine("Element in third index : " + numbers[2]);

// Access array using loop
Console.WriteLine("\nAccess array using loop:\n");
for (int i = 0; i < numbers.Length; i++)
{
    Console.WriteLine("Element in index {0} : {1} ", i, numbers[i]);
}

Console.ReadKey();