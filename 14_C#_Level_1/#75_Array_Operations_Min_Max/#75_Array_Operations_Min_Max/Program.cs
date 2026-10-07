// Note that we used System.Linq above.
int[] numbers = { 51, -1, 2, 14, 18, 40, 178 };
Console.Write("Array element: { ");
foreach (int number in numbers)
{
    Console.Write(number + ", ");
}
Console.WriteLine("}");

// Get the minimum number in the array
Console.WriteLine("Smallest  Element: " + numbers.Min());

// Get the largest number in array
Console.WriteLine("Largest Element: " + numbers.Max());

Console.ReadKey();