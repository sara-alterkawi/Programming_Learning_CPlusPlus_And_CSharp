internal class Program
{
    // Method with named arguments
    static void MyMethod(string child1, string child2)
    {
        Console.WriteLine("The youngest child is: " + child2);
    }
    static void Main(string[] args)
    {
        // See the order of sending parameters is not important.
        MyMethod(child2: "Hadi", child1: "Dania");

        Console.ReadKey();
    }
}