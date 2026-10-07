internal class Program
{
    static string GetMyName()
    {
        return "Ahmad Aljasem";
    }
    static void Main(string[] args)
    {
        Console.WriteLine("My Name is {0}", GetMyName());

        Console.ReadKey();
    }
}