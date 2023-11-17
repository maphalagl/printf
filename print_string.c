#include "main.h"
/**
 * print_s - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_string(va_list val)
{
	char *str;
	int len;
	int l;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (l = 0; l < len; l++)
			_putchar(str[l]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (l = 0; l < len; l++)
			_putchar(str[l]);
		return (len);
	}
}
