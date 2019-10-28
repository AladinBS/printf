#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_c - prints a char and returns 1
* @c: the list of arguments
* Return: number of printed characters
*/
int print_c(va_list c)
{
char ch = (char)va_arg(c, int);
_putchar(ch);
return (1);
}
/**
* print_s - prints a string and returns the length of string
* @s: the list of arguments
* Return: number of printed characters
*/
int print_s(va_list s)
{
char *string;
int i = 0;
string = va_arg(s, char *);
if (string == '\0')
{
string = "(null)";
}
for (i = 0; string[i]; i++)
{
_putchar(string[i]);
}
return (i);
}
/**
* print_rs - prints the reversed string and returns the length of string
* @rs: the list of arguments
* Return: number of printed characters
*/
int print_rs(va_list rs)
{
char *string;
int i = 0, count = 0;
string = va_arg(rs, char *);
if (string == '\0')
{
string = ")llun(";
}
for (i = 0; string[i]; i++)
{
;
}
i--;

for (; i >= 0; i--)
{
_putchar(string[i]);
count++;
}
return (count);
}

/**
* print_bin - Converts unsigned int argument to binary
* @bin: The decimal number to be converted
* Return: The number of digits printed
* Aladin Bensassi
*/
int print_bin(va_list bin)
{
unsigned int number, count = 0, index = 0;
int arr[100];
number = va_arg(bin, int);
if (number < 2)
{
_putchar(number + '0');
count = 1;
}
else if (number >= 2)
{
while (number > 0)
{
arr[index] = number % 2;
number /= 2;
index++;
}
}
while (index--)
{
_putchar(arr[index] + '0');
count++;
}
return (count);
}
/**
 * print_Xhexa - Converts decimal to uppercase hexadecimal
 * @args: the list of arguments
 *
 * Return: The number of digits printed
 */

int print_Xhexa(va_list args)
{
long int number, temp, x = 0, i;
char *num;
unsigned int size = 100;
number = va_arg(args, int);
if (number == 0)
{
_putchar('0');
x = 1;
}
else if (number < 0)
{
_putchar('-');
number = -number;
x = 1;
}
temp = number;
while (temp != 0)
{
temp /= 16;
}
num = convert(number, size, 16);
while (temp != 0)
{
temp /= 16;
}
num = convert(number, size, 16);
for (i = 0; num[i] != '\0'; i++)
{
_putchar(num[i]);
x++;
}
return (x);
}

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
