#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_Xhexa - Converts decimal to uppercase hexadecimal
 * @args: the list of arguments
 *
 * Return: The number of digits printed
 */

int print_Xhexa(va_list args)
{
char hex[20];
unsigned int count = 0, n = 0;
int i = 0;

n = va_arg(X, unsigned int);
if (n == 0)
{
_putchar(0 + '0');
count++;
}
while (n > 0)
{
if (n % 16 >= 10 && n % 16 <= 15)
hex[i] = 55 + (n % 16);
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
return (count);
}


/**
* _print_x - prints input integer to an hexadecimal in lowercase
* @x: the list of arguments
* Return: number of printed characters
*/
int _print_x(va_list x)
{
char hex[20];
unsigned int count = 0, n = 0;
int i = 0;

n = va_arg(x, unsigned int);
if (n == 0)
{
_putchar(0 + '0');
count++;
}
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
return (count);
}
