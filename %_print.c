#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include "functions.h"
/**
* print_percent - Print '%'.
* @args: arg list
* @options: format options
*/
void print_percent(va_list args, Options options)
{
(void)args;
(void)options;
outc('%');
}

