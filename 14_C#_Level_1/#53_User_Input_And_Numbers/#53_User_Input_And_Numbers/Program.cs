// Ask the user to enter their age
Console.WriteLine("Enter your age:");
// Read the user's input and convert it to an integer
// if you dont convert you will get error, and if you enter string you will get error
int age = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Your age is: " + age);

Console.ReadKey();