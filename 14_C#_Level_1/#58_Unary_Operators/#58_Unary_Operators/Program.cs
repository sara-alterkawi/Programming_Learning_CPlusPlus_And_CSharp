int number = 10, result;
bool flag = true;
// Unary plus operator
result = +number;
Console.WriteLine("+number = " + result);
// Unary minus operator
result = -number;
Console.WriteLine("-number = " + result);
// Logical NOT operator
result = ++number;
Console.WriteLine("++number = " + result);
// Decrement operator
result = --number;
Console.WriteLine("--number = " + result);
// Logical NOT operator
Console.WriteLine("!flag = " + (!flag));

Console.WriteLine(("number++ = ", number++));
Console.WriteLine((("number = ", number)));

Console.WriteLine((("++number = ", ++number)));
Console.WriteLine((("number = ", number)));

Console.ReadKey();