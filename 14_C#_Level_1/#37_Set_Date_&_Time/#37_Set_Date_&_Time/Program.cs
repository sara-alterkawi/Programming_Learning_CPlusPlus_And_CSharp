// Assigns default value 01/01/0001 00:00:00
DateTime dt1 = new DateTime();
Console.WriteLine(dt1);

// Assigns year, month, day
DateTime dt2 = new DateTime(2026, 09, 03);
Console.WriteLine(dt2);

// Assigns year, month, day, hour, min, seconds
DateTime dt3 = new DateTime(2026, 09, 03, 13, 15, 00);
Console.WriteLine(dt3);

// Assigns year, month, day, hour, min, seconds, UTC timezone
DateTime dt4 = new DateTime(2026, 09, 03, 13, 15, 28, DateTimeKind.Utc);
Console.WriteLine(dt4);

Console.ReadKey();