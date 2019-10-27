#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - prints numbers, followed by a new line.
 * @format: separator to print between numbers
 * Return: void
 */
int _printf(const char *format, ...)
{
va_list args;
size_t size;
size = strlen(format);
format = (char *)malloc(sizeof(size));
va_start(args, format);
write(1, format, size);
va_end(args);
return(0);
}
