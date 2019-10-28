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
* rot13 - encodes a string with rot13
* @str: string to be encoded
* Return: pointer to beginning of string
*/
char *rot13(char *str)
{
char encode[] = "azAZbyBYcxCXdwDWevEVfuFUgtGThsHSirIRjqJQkpKPloLOmnMN";
int i, k = 0;
int encode_r;

while (*(str + k) != '\0')
{
encode_r = 13;
for (i = 0; i < 52; i++)
{
if (*(str + k) == encode[i])
{
*(str + k) += encode_r;
break;
}
encode_r *= -1;
}
k++;
}
return (str);
}
