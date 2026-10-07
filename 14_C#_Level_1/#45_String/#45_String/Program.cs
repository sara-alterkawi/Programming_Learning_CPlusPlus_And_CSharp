// String methods
string S1 = "Sara Alterkawi";

Console.WriteLine("S1 = {0}, Length of S1: {1}", S1, S1.Length);
// Substring method takes two parameters: the starting index and the length of the substring
Console.WriteLine("Substring of S1: " + S1.Substring(2, 5));
// Lowercase and Uppercase methods convert the string to lowercase and uppercase respectively
Console.WriteLine("Lowercase of S1: " + S1.ToLower());
// Uppercase method converts the string to uppercase
Console.WriteLine("Uppercase of S1: " + S1.ToUpper());
// Indexer method allows you to access a character at a specific index in the string
Console.WriteLine("Character at index 2: " + S1[2]);
// Insert method inserts a string at a specified index in the original string
Console.WriteLine("Insert 'KKKK' at index 3: " + S1.Insert(3, "KKKK"));
// Replace method replaces all occurrences of a specified string with another string
Console.WriteLine("Replace 'a' with '*': " + S1.Replace("a", "*"));
// IndexOf method returns the index of the first occurrence of a specified string in the original string
Console.WriteLine("Index of 'r': " + S1.IndexOf("r"));
// Contains method checks if the original string contains a specified string and returns a boolean value
Console.WriteLine("Contains 't': " + S1.Contains("t"));
Console.WriteLine("Contains 'x': " + S1.Contains("x"));
// LastIndexOf method returns the index of the last occurrence of a specified string in the original string
Console.WriteLine("Last index of 'a': " + S1.LastIndexOf("a"));

string S2 = "Ahmad, Hadi, Aljasem";
// Split method splits the original string into an array of substrings based on a specified delimiter
string[] NamesList = S2.Split(',');
// Accessing the elements of the array using their index
Console.WriteLine("Name 1: {0}", NamesList[0]);
Console.WriteLine("Name 2: {0}", NamesList[1]);
Console.WriteLine("Name 3: {0}", NamesList[2]);

// Trim method removes all leading and trailing white-space characters from the original string
string S3 = "  Alterkawi  ";
// TrimStart method removes all leading white-space characters from the original string
Console.WriteLine("Trimmed string: {0}", S3.Trim());
Console.WriteLine("Trimmed start: {0}", S3.TrimStart());
Console.WriteLine("Trimmed end: {0}", S3.TrimEnd());

Console.ReadKey();