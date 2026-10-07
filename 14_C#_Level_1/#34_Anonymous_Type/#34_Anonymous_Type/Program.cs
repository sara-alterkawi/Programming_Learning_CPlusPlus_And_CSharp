// You dont specify any type here , automatically will be specified
var student = new
{
    Id = 20,
    FirstName = "Dania",
    LastName = "Aljasem"
};

Console.WriteLine("\nExample1:\n");
Console.WriteLine(student.Id); //output: 20
Console.WriteLine(student.FirstName); // output: Dania
Console.WriteLine(student.LastName); // output: Aljasem

// You can print like this:
Console.WriteLine(student);

// Anonymous types are read-only
// You cannot change the values of properties as they are read-only.

// student.Id = 2; // Error: cannot chage value
// student.FirstName = "Ali"; // Error: cannot chage value

// An anonymous type's property can include another anonymous type.
var student1 = new
{
    Id = 21,
    FirstName = "Hadi",
    LastName = "Aljasem",
    Address = new
    {
        Id = 1,
        City = "Perstorp",
        Country = "Sweden"
    }
};

Console.WriteLine("\nExample2:\n");
Console.WriteLine(student1.Id);
Console.WriteLine(student1.FirstName);
Console.WriteLine(student1.LastName);

Console.WriteLine(student1.Address.Id);
Console.WriteLine(student1.Address.City);
Console.WriteLine(student1.Address.Country);
Console.WriteLine(student1.Address);

Console.ReadKey();