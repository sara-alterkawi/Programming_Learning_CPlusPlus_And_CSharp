char[] gender = { 'm', 'f', 'm', 'm', 'm', 'f', 'f', 'm', 'm', 'f' };
Console.Write("Gender Array: { ");
// For eech to iterate through the array and print all items
foreach (char ch in gender)
{
    Console.Write(ch + ", ");
}
Console.WriteLine("}");
int male = 0, female = 0;
// For each loop iterate through the array to count and print each gender
foreach (char g in gender)
{
    if (g == 'm')
        male++;
    else if (g == 'f')
        female++;
}
Console.WriteLine("Number of male = {0}", male);
Console.WriteLine("Number of female = {0}", female);

Console.ReadKey();