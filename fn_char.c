#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * convert - converts decimal number to hexadecimal number
 * @num: number to be converted
 * @size: digits in hexadecimal number
 * @base: base to convert to
 * Return: pointer to hexadecimal
 */
char *convert(unsigned int num, unsigned int size, int base)
{
char num_sys[] = "0123456789ABCDEF";
char buffer[100];
char *ptr;

ptr = &buffer[size];
*ptr = '\0';

do {
*--ptr = num_sys[num % base];
num /= base;
} while (num != 0);
return (ptr);
}

/**
*print_rot - prints the rot13'ed string
*@ro: the arguments list
*Return: number of printed characters
*/
int print_rot(va_list ro)
{
char *s = va_arg(ro, char *);
int i, j, count = 0;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while ((alpha[j] != '\0') && (s[i] != alpha[j]))
{
j++;
}
if (s[i] == alpha[j])
{
_putchar(rot[j]);
count++;
}
else if (alpha[j] == '\0')
{
_putchar(s[i]);
count++;
}
}
return (count);
}

/**
 * print_S - prints a string and returns the length of string
 * Non printable characters are printed as "\x"
 * followed by their ASCII values in two digit hexadecimal
 * @S: the list of arguments
 * Return: number of printed characters
 */
int print_S(va_list S)
{
char *string, hex[10];
int i = 0, n = 0, j = 0;
unsigned int count = 0;

string = va_arg(S, char *);
if (string == '\0')
string = "(null)";
for (i = 0; string[i]; i++)
{
j = 0;
if ((string[i] > 0 && string[i] < 32) || (string[i] >= 127))
{
_putchar('\\');
_putchar('x');
n = string[i];
if (n <= 15)
_putchar('0');
while (n > 0)
{
if (n % 16 >= 10 && n % 16 <= 15)
hex[j] = 55 + (n % 16);
else
hex[j] = 48 + (n % 16);
n = n / 16;
j++;
}
for (--j; j >= 0; j--)
_putchar(hex[j]);
count += 4;
}
else
{
_putchar(string[i]);
count++;
}
}
return (count);
}

/**
* long_hex_helper - converts and prints base 10 in lowercase base 16
* @n: argument of type long
*
* Return: number of characters printed
*/

int long_hex_helper(long n)
{
if (n < 16)
{
if (n < 9)
_putchar(n + '0');

else
_putchar((n % 10) + 97);

return (1);
}
return(1 + long_hex_helper(n / 16) +
!_putchar(n % 16 < 9 ? n % 16 + '0' : ((n % 16) % 10) + 97));
}

/**
* print_pointer - prints pointer address
* @args: address to print
*
* Return: number of characters printed
*/

int print_pointer(va_list args)
{
long address = va_arg(args, long);

if (address == 0)
{
write(1, "(nil)", 5);
return (5);
}

if (address < 0)
{
write(1, "0xffffffffffffffff", 18);
return (18);
}

_putchar('0');
_putchar('x');

return (long_hex_helper(address) + 2);
}

