internal class Program
{
    // Method to Print user info
    static void PrintMyInfo(string Name, int Age)
    {
        Console.WriteLine("Name= {0} , Age= {1}", Name, Age);
    }
    static void Main(string[] args)
    {
        Console.WriteLine("Enter your name:");
        string Name = Console.ReadLine();

        Console.WriteLine("Enter your age:");
        int Age = Convert.ToInt32(Console.ReadLine());
        PrintMyInfo(Name, Age);

        Console.ReadKey();
    }
}