internal class Program
{
    static void PrintMyInfo(string Name, int Age, string Address = "No Address")
    {
        Console.WriteLine("Name= {0} , Age= {1}, Address= {2}", Name, Age, Address);
    }
    static void Main(string[] args)
    {
        string Name, Address;
        int Age;

        Console.WriteLine("Enter your name:");
        Name = Console.ReadLine();

        Console.WriteLine("Enter your age:");
        Age = Convert.ToInt32(Console.ReadLine());

        PrintMyInfo(Name, Age);

        // Second we provided the address
        Console.WriteLine("Enter your name:");
        Name = Console.ReadLine();

        Console.WriteLine("Enter your age:");
        Age = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter your Address:");
        Address = Console.ReadLine();

        PrintMyInfo(Name, Age, Address);

        Console.ReadKey();
    }
}