#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_27},
		{"%i", print_integer}, {"%d", print_decimal}
	};

	va_list args;
	int l = 0; 
	int g; 
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[l] != '\0')
	{
		g = 13;
		while (g >= 0)
		{
			if (p[g].ph[0] == format[l] && p[g].ph[1] == format[l + 1])
			{
				len += p[g].function(args);
				l += 2;
				goto Here;
			}
			g--;
		}
		_putchar(format[l]);
		len++;
		l++;
	}
	va_end(args);
	return (len);
}
