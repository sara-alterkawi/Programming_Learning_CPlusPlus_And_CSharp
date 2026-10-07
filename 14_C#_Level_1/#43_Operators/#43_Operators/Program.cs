// DateTime and TimeSpan operators
// DateTime one
DateTime dt1 = new DateTime(2015, 12, 20);
Console.WriteLine("DateTime one: {0}", dt1);
// DateTime two
DateTime dt2 = new DateTime(2016, 12, 31, 5, 10, 20);
Console.WriteLine("DateTime two: {0}", dt2);
// TimeSpan
TimeSpan time = new TimeSpan(10, 5, 25, 50);
Console.WriteLine("TimeSpan: {0}", time);
// Add and subtract DateTime and TimeSpan
Console.WriteLine("DateTime two + TimeSpan: {0}", dt2 + time); // 1/10/2017 10:36:10 AM
// Subtract DateTime
Console.WriteLine("DateTime two - DateTime one: {0}", dt2 - dt1); // 377.05:10:20
// Compare DateTime if equal
Console.WriteLine("DateTime one == DateTime two: {0}", dt1 == dt2); // False
// Compare DateTime if not equal
Console.WriteLine("DateTime one != DateTime two: {0}", dt1 != dt2); // True
// Compare DateTime if greater than
Console.WriteLine("DateTime one > DateTime two: {0}", dt1 > dt2); // False
// Compare DateTime if less than
Console.WriteLine("DateTime one < DateTime two: {0}", dt1 < dt2); // True
// Compare DateTime if greater than or equal to
Console.WriteLine("DateTime one >= DateTime two: {0}", dt1 >= dt2); // False
// Compare DateTime if less than or equal to
Console.WriteLine("DateTime one <= DateTime two: {0}", dt1 <= dt2); // True

Console.ReadKey();