//  Nullable<int> can be assigned any value
//  from -2147483648 to 2147483647, or a null value.

Nullable<int> i = null;
Console.WriteLine(i.HasValue); // Output: False
Console.ReadKey();