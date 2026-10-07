//  String Interpolation
string firstName = "Dania";
string lastName = "Aljasem";
string code = "107";

// You shold use $ to $ to identify an interpolated string 
string fullName = $"Ms. {firstName} {lastName}, Code: {code}";
// You can also use string.Format to format the string
Console.WriteLine("Full Name: {0}", fullName);

Console.ReadKey();