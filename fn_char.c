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
/**
* print_u - Convert a number into an unsigned int and print it
* @un: The number to be converted
*
* Return: The number of digits printed
*/
int print_u(va_list un)
{
unsigned int number, count = 0, divisor;

number = va_arg(un, int);

if (number == 0)
{
_putchar('0');
count = 1;
}
if (number > 0)
{
for (divisor = 1; (number / divisor) > 9; divisor *= 10)
;
while (divisor != 0)
{
_putchar((number / divisor) + '0');
number %= divisor;
divisor /= 10;
count++;
}
}
return (count);
}


/**
 * print_oct - Converts a decimal number passed to the argument to an octal
 * number
 * @oct: The number to be converted
 * Return: count of digit in octal number
 */
int print_oct(va_list oct)
{
unsigned int number, count = 0, index = 0;
int arr[100];

number = va_arg(oct, int);
if (number < 9)
{
_putchar(number + '0');
count = 1;
}
else if (number >= 9)
{
while (number > 0)
{
arr[index] = number % 8;
number /= 8;
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

#include "holberton.h"
/**
* print_usr - prints a string and values of
* non-printed chars
* @arguments: input string
* @buf: buffer pointer
* @ibuf: index for buffer pointer
* Return: number of chars printed
*/
int print_usr(va_list arguments, char *buf, unsigned int ibuf)
{
unsigned char *str;
char *hexadecimal, *binary;
unsigned int i, sum, op;

str = va_arg(arguments, unsigned char *);
binary = malloc(sizeof(char) * (32 + 1));
hexadecimal = malloc(sizeof(char) * (8 + 1));
for (sum = i = 0; str[i]; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
ibuf = handl_buf(buf, '\\', ibuf);
ibuf = handl_buf(buf, 'x', ibuf);
op = str[i];
binary = fill_binary_array(binary, op, 0, 32);
hexadecimal = fill_hex_array(binary, hexadecimal, 1, 8);
ibuf = handl_buf(buf, hexadecimal[6], ibuf);
ibuf = handl_buf(buf, hexadecimal[7], ibuf);
sum += 3;
}
else
ibuf = handl_buf(buf, str[i], ibuf);
}
free(binary);
free(hexadecimal);
return (i + sum);
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
