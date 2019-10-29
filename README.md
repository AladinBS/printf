# Printf
Printf function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.
## Description
| File | Task |
| ---- | ---- |
| holberton.h | Header file containing all prototype functions and structs used in this project |
| _printf.c | The actual _printf function to print the string as well as whatever argument corresponds with each format specifier |
| getspecifier.c | Contains all the format specifier for the printf function |
| fn_char.c | Contains the printing functions for printf |
| fn_numbers.c | Contains the printing functions for printf |

| Format Specifier | Data Type |
| ---------------- | --------- |
| %c | char |
| %s | string |
| %d | base 10 decimal number |
| %i | base 10 integer |
| %% | percent sign |
| %b | binary number |
| %o | octal number |
| %u | unsigned integer |
| %X | hexadecimal number (uppercase) |
## Usage
```c
printf ("string", variable);
```


## Authorized functions and macros

  *  write (man 2 write)
  *  malloc (man 3 malloc)
  *  free (man 3 free)
  *  va_start (man 3 va_start)
  *  va_end (man 3 va_end)
  *  va_copy (man 3 va_copy)
  *  va_arg (man 3 va_arg)

## Compilation
``$ gcc -Wall -Werror -Wextra -pedantic *.c``

# Project By
Aladin Ben Sassi and Yassin Bahri
