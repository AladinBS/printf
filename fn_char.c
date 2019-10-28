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
* Aladin Ben Sassi / Yassin Bahri
*/
int print_s(va_list s)
{
char *string;
int x = 0;
string = va_arg(s, char *);
if (string == '\0')
{
string = "(null)";
}
for (x = 0; string[x]; x++)
{
_putchar(string[x]);
}
return (x);
}