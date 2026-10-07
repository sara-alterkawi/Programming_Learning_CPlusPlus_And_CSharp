// Note that we used System.Linq above.
int[] numbers = { 20, 22, 19, 18, 1 };
Console.Write("Array elements: {");
foreach (int number in numbers)
{
    Console.Write(number + ", ");
}
Console.WriteLine("}");
// Compute Count
Console.WriteLine("Count : " + numbers.Count());

// Compute Sum
Console.WriteLine("Sum : " + numbers.Sum());

// Compute the average
Console.WriteLine("Average: " + numbers.Average());

Console.ReadKey();