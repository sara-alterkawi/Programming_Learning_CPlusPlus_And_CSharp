// Simple Calculator
char op;
double first, second, result;
// Get user input for numbers and operator
Console.Write("Enter first number: ");
first = Convert.ToDouble(Console.ReadLine());

Console.Write("Enter second number: ");
second = Convert.ToDouble(Console.ReadLine());

Console.Write("Enter operator (+, -, *, /): ");
op = (char)Console.Read();

// Perform calculation based on operator
switch (op)
{
    case '+':
        result = first + second;
        Console.WriteLine("{0} + {1} = {2}", first, second, result);
        break;
    case '-':
        result = first - second;
        Console.WriteLine("{0} - {1} = {2}", first, second, result);
        break;
    case '*':
        result = first * second;
        Console.WriteLine("{0} * {1} = {2}", first, second, result);
        break;
    case '/':
        result = first / second;
        Console.WriteLine("{0} / {1} = {2}", first, second, result);
        break;
    default:
        Console.WriteLine("Invalid Operator");
        break;
}

Console.ReadKey();