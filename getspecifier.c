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
int a;
mystr p[] = {
{'c', print_c},
{'s', print_s},  {'i', _print_i},
{'d', _print_i},  {'\0', '\0'}
{"b", print_bnr}, {"u", print_unt},
{"o", print_oct}, {"x", print_hex},
{"X", print_upx}, {"S", print_usr},
{"p", print_add}, {"li", prinlint},
{"ld", prinlint}, {"lu", prinlunt},
{"lo", prinloct}, {"lx", prinlhex},
{"lX", prinlupx}, {"hi", prinhint},
{"hd", prinhint}, {"hu", prinhunt},
{"ho", prinhoct}, {"hx", prinhhex},
{"hX", prinhupx}, {"#o", prinnoct},
{"#x", prinnhex}, {"#X", prinnupx},
{"#i", print_int}, {"#d", print_int},
{"#u", print_unt}, {"+i", prinpint},
{"+d", prinpint}, {"+u", print_unt},
{"+o", print_oct}, {"+x", print_hex},
{"+X", print_upx}, {" i", prinsint},
{" d", prinsint}, {" u", print_unt},
{" o", print_oct}, {" x", print_hex},
{" X", print_upx}, {"R", print_rot},
{"r", print_rev}, {"%", print_prg},
{"l", print_prg}, {"h", print_prg},
{" +i", prinpint}, {" +d", prinpint},
{"+ i", prinpint}, {"+ d", prinpint},
{" %", print_prg}, {NULL, NULL},
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
