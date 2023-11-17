#include "main.h"
/**
 * print_integer - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_integer(va_list args)
{
	int g = va_arg(args, int);
	int nom, lst = g % 10, dig, ex = 1;
	int  l = 1;

	g = g / 10;
	nom = g;

	if (lst < 0)
	{
		_putchar('-');
		nom = -nom;
		g = -g;
		lst = -lst;
		l++;
	}
	if (nom > 0)
	{
		while (nom / 10 != 0)
		{
			ex = ex * 10;
			nom = nom / 10;
		}
		nom = g;
		while (ex > 0)
		{
			dig = nom / ex;
			_putchar(dig + '0');
			nom = nom - (dig * ex);
			ex = ex / 10;
			l++;
		}
	}
	_putchar(lst + '0');

	return (l);
}

/**
 * print_decimal - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_decimal(va_list args)
{
	int g = va_arg(args, int);
	int nom, lst = n % 10, dig;
	int  l = 1;
	int ex = 1;

	g = g / 10;
	nom = g;

	if (lst < 0)
	{
		_putchar('-');
		nom = -nom;
		g = -g;
		lst = -lst;
		l++;
	}
	if (nom > 0)
	{
		while (nom / 10 != 0)
		{
			ex = ex * 10;
			nom = nom / 10;
		}
		nom = g;
		while (ex > 0)
		{
			dig = nom / ex;
			_putchar(dig + '0');
			nom = nom - (dig * ex);
			ex = ex / 10;
			l++;
		}
	}
	_putchar(lst + '0');

	return (l);
}
