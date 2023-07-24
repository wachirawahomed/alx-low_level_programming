#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str:  string to be printed
 * Return: string
 */

void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
