internal class Program
{
    // Overloading method with two parameters
    static int Sum(int Num1, int Num2)
    {
        return Num1 + Num2;
    }
    // Overloading method with three parameters
    static int Sum(int Num1, int Num2, int Num3)
    {
        return Num1 + Num2 + Num3;
    }
    // Overloading method with four parameters
    static int Sum(int Num1, int Num2, int Num3, int Num4)
    {
        return Num1 + Num2 + Num3 + Num4;
    }

    static void Main(string[] args)
    {
        // We have 3 different methods but with the same name.
        int x, y, z, w;
        Console.Write("Enter first number: ");
        x = int.Parse(Console.ReadLine());

        Console.Write("Enter second number: ");
        y = int.Parse(Console.ReadLine());

        Console.Write("Enter third number: ");
        z = int.Parse(Console.ReadLine());

        Console.Write("Enter fourth number: ");
        w = int.Parse(Console.ReadLine());

        Console.WriteLine("Sum of {0} and {1} = " + Sum(x, y), x, y);
        Console.WriteLine("Sum of {0}, {1}, and {2} = " + Sum(x, y, z), x, y, z);
        Console.WriteLine("Sum of {0}, {1}, {2}, and {3} = " + Sum(x, y, z, w), x, y, z, w);

        Console.ReadKey();
    }
}