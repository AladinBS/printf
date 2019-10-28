#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 * Aladin Bensassi / Yassin Bahri
 */
typedef struct mystr
{
char letter;
int (*func)(va_list);
} mystr;
typedef struct print
{
char *type_arg;
int (*f)(va_list, char *, unsigned int);
} print_t;
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int(*getspecifier(char))(va_list);
int _print_i(va_list vi);
int print_rs(va_list rs);
int(*getspecifier(char))(va_list);
int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int prinlint(va_list arguments, char *buf, unsigned int ibuf);
int prinlunt(va_list arguments, char *buf, unsigned int ibuf);
int prinloct(va_list arguments, char *buf, unsigned int ibuf);
int prinlhex(va_list arguments, char *buf, unsigned int ibuf);
int prinlupx(va_list arguments, char *buf, unsigned int ibuf);
int prinhint(va_list arguments, char *buf, unsigned int ibuf);
int prinhunt(va_list arguments, char *buf, unsigned int ibuf);
int prinhoct(va_list arguments, char *buf, unsigned int ibuf);
int prinhhex(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
int prinnoct(va_list arguments, char *buf, unsigned int ibuf);
int prinnhex(va_list arguments, char *buf, unsigned int ibuf);
int prinnupx(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);
int _printf(const char *format, ...);
void _putchar(char c);
int print_int(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_per(void);
int print_bin(va_list bin);
int print_Xhexa(va_list args);
char *convert(unsigned int num, unsigned int size, int base);
int print_oct(va_list oct);
int print_u(va_list un);
#endif
