char ch;
Console.WriteLine("Enter a letter?");
ch = Convert.ToChar(Console.ReadLine());
// Check if the character is a vowel or not
switch (Char.ToLower(ch))
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        Console.WriteLine("Vowel");
        break;

    default:
        Console.WriteLine("Not a vowel");
        break;
}

Console.ReadKey();