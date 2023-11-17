#include "main.h"

/**
 * print_c - prints a char.
 * @val: arguments.
 * Return: integers.
 */
int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
