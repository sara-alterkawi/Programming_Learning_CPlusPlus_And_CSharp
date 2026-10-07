// First date: February 21, 2023
DateTime dt1 = new DateTime(2023, 2, 21);
// Second date: February 25, 2023
DateTime dt2 = new DateTime(2023, 2, 25);
// Calculate the difference between the two dates
TimeSpan result = dt2.Subtract(dt1);

Console.WriteLine(result.Days);

Console.ReadKey();