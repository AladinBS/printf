#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* getspecifier - finds the function for the specifier
* @x: the specifier in the string
* Return: pointer to function
* Aladin Bensassi / Yassin Bahri
*/
int(*getspecifier(char x))(va_list)
{
int i;
mystr p[] = {
{'c', print_c},
{'s', print_s},
{'i', _print_i},
{'d', _print_i},
{'\0', '\0'}
};
for (a = 0; p[a].letter; a++)
{
if (p[a].letter == x)
{
return (p[a].func);
}
}
return (0);
}
