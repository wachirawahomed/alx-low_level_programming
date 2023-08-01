#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory
 * @b: constant value
 * @n: numbet of bytes to fill
 * Return: memory area pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}
	return (s);
}
