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
* _print_p - prints a string and returns the length of string
* @p: the list of arguments
* Return: number of printed characters
*/
int _print_p(va_list p)
{
unsigned long hex[20], n = 0;
unsigned int count = 0;
int i = 0;

n = va_arg(p, unsigned long);
if (n == 0)
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
count += 5;
}
else if (n > 0)
{
_putchar('0');
_putchar('x');
count += 2;
while (n > 0)
{
if (n % 16 >= 10 && n % 16 <= 15)
hex[i] = 87 + (n % 16);
else
hex[i] = 48 + (n % 16);
n = n / 16;
i++;
}
for (--i; i >= 0; i--)
{
_putchar(hex[i]);
count++;
}
}
return (count);
}
