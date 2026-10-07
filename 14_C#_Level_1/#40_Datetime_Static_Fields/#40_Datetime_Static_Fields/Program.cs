// DtateTime static properties
// To get the current date and time.
DateTime currentDateTime = DateTime.Now;
Console.WriteLine("currentDateTime: " + currentDateTime);

// To get the today date.
DateTime todaysDate = DateTime.Today;
Console.WriteLine("Today: " + todaysDate);

// To get the current UTC date and time.
DateTime currentDateTimeUTC = DateTime.UtcNow;
Console.WriteLine("currentDateTimeUTC: " + currentDateTimeUTC);

// To get the maximum and minimum value of DateTime.
DateTime maxDateTimeValue = DateTime.MaxValue;
Console.WriteLine("maxDateTimeValue: " + maxDateTimeValue);

// To get the minimum value of DateTime.
DateTime minDateTimeValue = DateTime.MinValue;
Console.WriteLine("minDateTimeValue: " + minDateTimeValue);

Console.ReadKey();