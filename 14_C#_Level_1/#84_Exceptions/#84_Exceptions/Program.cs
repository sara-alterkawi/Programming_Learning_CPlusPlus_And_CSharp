// This code will throw an exception because the index is out of range
try
{
    int[] myNumbers = { 1, 2, 3 };
    Console.WriteLine("Value at index 10: " + myNumbers[10]);
}
catch (Exception e)
{
    Console.WriteLine(e.Message);
}
Console.ReadLine();