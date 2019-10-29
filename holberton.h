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
int print_Xhexa(va_list args);
char *convert(unsigned int num, unsigned int size, int base);
int print_oct(va_list oct);
int print_u(va_list un);
int print_rot(va_list ro);
void print_S(va_list args, Options options);
int out(const char *data, int length);
void outc(char c);
void outcr(char c, int count);
void pad_before(Options options, int length, char *prefix, int prefixlen);
void pad_after(Options options, int length);

#endif
