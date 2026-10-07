// Create a new DateTime object with the specified year, month, and day.
DateTime dt = new DateTime(2023, 2, 21);

// Hours, Minutes, Seconds
TimeSpan ts = new TimeSpan(49, 25, 34);
Console.WriteLine(ts);
Console.WriteLine(ts.Days);
Console.WriteLine(ts.Hours);
Console.WriteLine(ts.Minutes);
Console.WriteLine(ts.Seconds);

// This will add time span to the date.
DateTime newDate = dt.Add(ts);

Console.WriteLine(newDate);

Console.ReadKey();