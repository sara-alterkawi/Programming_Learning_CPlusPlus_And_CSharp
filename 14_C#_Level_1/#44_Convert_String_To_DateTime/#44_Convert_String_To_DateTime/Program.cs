// Valid string date
var str = "6/12/2023";
DateTime dt;
// TryParse method returns true if the conversion is successful, otherwise false
var isValidDate = DateTime.TryParse(str, out dt);

if (isValidDate)
    Console.WriteLine($"Valid date: {dt}");
else
    Console.WriteLine($"{str} is not a valid date string");

// Invalid string date
var str2 = "6/65/2023";
DateTime dt2;

var isValidDate2 = DateTime.TryParse(str2, out dt2);

if (isValidDate2)
    Console.WriteLine($"Valid date: {dt2}");
else
    Console.WriteLine($"{str2} is not a valid date string");

Console.ReadKey();