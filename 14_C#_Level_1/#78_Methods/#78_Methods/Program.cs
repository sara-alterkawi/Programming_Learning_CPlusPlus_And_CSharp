internal class Program
{
    static void PrintMyName()
    {
        Console.WriteLine("Enter your Name: ");
        string myName = Console.ReadLine();
        Console.WriteLine("Welcome " + myName);
    }
    static void Main(string[] args)
    {
        PrintMyName();

        Console.ReadKey();
    }
}