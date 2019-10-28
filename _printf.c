<<<<<<< HEAD
#include<stdio.h>
#include<stdarg.h>
void Myprintf(char* format,...)
{
char *traverse;
unsigned int i;
char *s;
va_list arg;
va_start(arg, format);
for(traverse = format; *traverse != '\0'; traverse++)
{
while( *traverse != '%' )
{ 
putchar(*traverse);
traverse++;
}
traverse++;
switch(*traverse) 
{
case 'c' : i = va_arg(arg,int);     //Fetch char argument
putchar(i);
break; 
case 'd' : i = va_arg(arg,int);         //Fetch Decimal/Integer argument
if(i<0) 
{ 
i = -i;
putchar('-'); 
} 
puts(convert(i,10));
break; 
case 'o': i = va_arg(arg,unsigned int); //Fetch Octal representation
puts(convert(i,8));
break;
case 's': s = va_arg(arg,char *);       //Fetch string
puts(s); 
break; 
case 'x': i = va_arg(arg,unsigned int); //Fetch Hexadecimal representation
puts(convert(i,16));
break; 
}   
} 
va_end(arg); 
} 
char *convert(unsigned int num, int base) 
{ 
static char Representation[]= "0123456789ABCDEF";
static char buffer[50]; 
char *ptr; 
ptr = &buffer[49]; 
*ptr = '\0'; 
do 
{ 
*--ptr = Representation[num%base]; 
num /= base; 
}
while(num != 0); 
return(ptr); 
=======
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
* _printf - A print function
* @format: pointer to a string
* Return: number of chars
* Aladin Bensassi / Yassin Bahri
**/
int _printf(const char *format, ...)
{
unsigned int x = 0, a = 0;
int (*f)(va_list);
va_list list;
if (format == '\0')
return (-1);
va_start(list, format);
while (format && format[a])
{
if (format[a] != '%')
{
_putchar(format[a]);
x++;
}
else if (format[a] == '\0')
return (x);
else if (format[a] == '%' && format[a + 1] == '\0')
return (-1);
else if (format[a] == '%')
{
f = getspecifier(format[a + 1]);
a += 1;
if (f == '\0')
{
if (format[a] != '%')
{
_putchar(format[a - 1]);
x += 1;
}
_putchar(format[a]);
x += 1;
}
else
x = x + f(list);
}
a++;
}
va_end(list);
return (x);
>>>>>>> d4613ebff5f99cc8b93bd9d585501cbe23a4ded7
}
