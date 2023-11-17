#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *str)
{
	int l;

	for (l = 0; str[l] != 0; l++)
		;
	return (l);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *str)
{
	int l;

	for (l = 0; str[l] != 0; l++)
		;
	return (l);
}
