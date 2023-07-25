#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: always 0.
 */

void puts2(char *str)
{
	int i = 0;
	int l = 0;

	while (str[i++])
	{
		l++;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
