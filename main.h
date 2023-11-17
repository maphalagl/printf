#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @funct: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*funct)();
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_27(void);
int print_decimal(va_list args);
int print_integer(va_list args);
#endif
