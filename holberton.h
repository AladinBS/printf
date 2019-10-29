#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
* struct mystr - pointer to function with corresponding letter
* @letter: specifier
* @func: print argument
*/
typedef struct mystr
{
char letter;
int (*func)(va_list);
} mystr;


int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int(*getspecifier(char))(va_list);
int _print_p(va_list p);
int _print_i(va_list vi);
int print_bin(va_list bin);
int print_rs(va_list rs);
char *convert(unsigned int num, unsigned int size, int base);
int print_rot(va_list ro);
int print_S(va_list S);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);

#endif
