internal class Program
{
    // A struct is a value type data type that can encapsulate data and related functionality.
    struct stStudent
    {
        public string FirstName;
        public string LastName;
    }
    // The Main method is the entry point of the program.
    static void Main(string[] args)
    {
        // A struct object can be created with or without the new operator,
        // same as primitive type variables.
        // Initializing a struct object with new variable declaration.
        stStudent Student;
        Student.FirstName = "Dania";
        Student.LastName = "Aljasem";
        Console.WriteLine(Student.FirstName);
        Console.WriteLine(Student.LastName);

        // New struct object with new variable declaration.
        stStudent Student2 = new stStudent();
        Student2.FirstName = "Hadi";
        Student2.LastName = "Aljasem";
        Console.WriteLine(Student2.FirstName);
        Console.WriteLine(Student2.LastName);

        Console.ReadKey();
    }
}