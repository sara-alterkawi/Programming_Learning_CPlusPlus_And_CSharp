// Byte is an 8-bit unsigned integer type that can store values from 0 to 255.
byte b1 = 255;
//  byte b2 = -128;// Compile-time error: Constant value '-128' cannot be converted to a 'byte'
Console.WriteLine("\nByte:");
Console.WriteLine("Min={0} , Max={1}", Byte.MinValue, Byte.MaxValue);

// SByte is an 8-bit signed integer type that can store values from -128 to 127.
sbyte sb1 = -128;
sbyte sb2 = 127;
Console.WriteLine("\nSByte:");
Console.WriteLine("Min={0} , Max={1}", SByte.MinValue, SByte.MaxValue);

// Short is a 16-bit signed integer type that can store values from -32,768 to 32,767.
short s1 = -32768;
short s2 = 32767;
// short s3 = 35000; // Compile-time error: Constant value '35000' cannot be converted to a 'short'
Console.WriteLine("\nShort:");
Console.WriteLine("Min={0} , Max={1}", Int16.MinValue, Int16.MaxValue);

// UShort is a 16-bit unsigned integer type that can store values from 0 to 65,535.
ushort us1 = 65535;
//  ushort us2 = -32000; // Compile-time error: Constant value '-32000' cannot be converted to a 'ushort'
Console.WriteLine("\nUShort:");
Console.WriteLine("Min={0} , Max={1}", UInt16.MinValue, UInt16.MaxValue);

// Int is a 32-bit signed integer type that can store values from -2,147,483,648 to 2,147,483,647.
int i = -2147483648;
int j = 2147483647;
//  int k = 4294967295; // Compile-time error: Cannot implicitly convert type 'uint' to 'int'.
Console.WriteLine("\nInt:");
Console.WriteLine("Min={0} , Max={1}", Int32.MinValue, Int32.MaxValue);

// Uint is a 32-bit unsigned integer type that can store values from 0 to 4,294,967,295.
uint ui1 = 4294967295;
// uint ui2 = -1; // Compile-time error: Constant value '-1' cannot be converted to a 'uint'
Console.WriteLine("\nUInt:");
Console.WriteLine("Min={0} , Max={1}", UInt32.MinValue, UInt32.MaxValue);

// Long is a 64-bit signed integer type that can store values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
long l1 = -9223372036854775808;
long l2 = 9223372036854775807;
Console.WriteLine("\nLong:");
Console.WriteLine("Min={0} , Max={1}", Int64.MinValue, Int64.MaxValue);

ulong ul1 = 0;
ulong ul2 = 18446744073709551615;
Console.WriteLine("\nULong:");
Console.WriteLine("Min={0} , Max={1}", UInt64.MinValue, UInt64.MaxValue);

// Float is a 32-bit single-precision floating-point type that can store values from approximately ±1.5 x 10^-45 to ±3.4 x 10^38.
float f1 = 123456.5F;
float f2 = 1.123456f;
Console.WriteLine("\nFloat:");
Console.WriteLine("Min={0} , Max={1}", float.MinValue, float.MaxValue);

// Double is a 64-bit double-precision floating-point type that can store values from approximately ±5.0 x 10^-324 to ±1.7 x 10^308.
double d1 = 12345678912345.5d;
double d2 = 1.123456789123456d;
Console.WriteLine("\nDouble:");
Console.WriteLine("Min={0} , Max={1}", double.MinValue, double.MaxValue);

// Decimal is a 128-bit decimal type that can store values from approximately ±1.0 x 10^-28 to ±7.9 x 10^28.
// The decimal type has more precision and a smaller range
// than both float and double,
// and so it is appropriate for financial and monetary calculations.
decimal d3 = 123456789123456789123456789.5m;
decimal d4 = 1.1234567891345679123456789123m;
Console.WriteLine("\nDecimal:");
Console.WriteLine("Min={0} , Max={1}", decimal.MinValue, decimal.MaxValue);

// Scientific Notation
// Use e or E to indicate the power of 10 
// as exponent part of scientific notation with float, double or decimal.
double d = 0.12e2;
Console.WriteLine(d);  // 12;

// Use e or E to indicate the power of 10
float f = 123.45e-2f;
Console.WriteLine(f);  // 1.2345

// Use e or E to indicate the power of 10
decimal m = 1.2e6m;
Console.WriteLine(m); // 1200000

// Hex & Binary is a way to represent numbers in base 16 and base 2 respectively. In C#, you can use the prefix "0x" for hexadecimal and "0b" for binary.
int hex = 0x2F;
int binary = 0b_0010_1111;
Console.WriteLine(hex);
Console.WriteLine(binary);

Console.ReadKey();