<<<<<<< HEAD
<<<<<<< HEAD
#ifndef _HOLBERTON_H
#define _HOLBERTON_H
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
=======
#ifndef HOLB_H
#define HOLB_H
#define BUFSIZE 1025
=======
#ifndef HOLBERTON_H
#define HOLBERTON_H
>>>>>>> 1b7e7ea6f00e5b42d5d37fa1f1955aa6b9775bdc
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
<<<<<<< HEAD
char *(*get_valid_type(char s))(va_list);
char *found_char(va_list c);
char *found_string(va_list *s);
char *found_percent();
char *found_int(va_list n);
char *found_unsigned(va_list usign);
char *found_nothing(char);
char *found_reverse(va_list s);
char *found_rot13(va_list s);
char *found_octal(va_list n);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int _strlen(char *s);
void _puts(char *buffer, int size);
int alloc_buffer(char *hold, int hlen, char *buffer, int blen, double *total);
char *ctos(char c);
>>>>>>> d4613ebff5f99cc8b93bd9d585501cbe23a4ded7
=======
int print_c(va_list c);
int print_s(va_list s);
int(*getspecifier(char))(va_list);
int _print_i(va_list vi);
>>>>>>> 1b7e7ea6f00e5b42d5d37fa1f1955aa6b9775bdc
#endif
