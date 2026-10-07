internal class Program
{
    // Enum declaration
    enum WeekDays
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    }
    static void Main(string[] args)
    {
        // Enum to string conversion
        Console.WriteLine("Weekday: {0}", WeekDays.Friday); // Output: Friday
                                                            // Enum to int conversion
        int day = (int)WeekDays.Friday;
        Console.WriteLine("Day number: {0}", day); // Output: 4
                                                   // Int to enum conversion
        var wd = (WeekDays)5;
        Console.WriteLine("New weekday by entering int 5: {0}", wd); // Output: Saturday 

        Console.ReadKey();
    }
}