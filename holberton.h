#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
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
int _print_i(va_list vi);
int print_bin(va_list bin);
int print_rs(va_list rs);
int _print_X(va_list args);
char *convert(unsigned int num, unsigned int size, int base);
int _print_o(va_list oct);
int _print_u(va_list un);
int _print_x(va_list o);
int print_rot(va_list ro);
#endif
