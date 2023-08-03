#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to be printed
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
