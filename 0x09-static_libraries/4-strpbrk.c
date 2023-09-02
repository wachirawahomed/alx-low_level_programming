#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: set of bytes
 * Return: pointer to the byte in s that matches one of the bytes in accept, or
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n;
	unsigned int m;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
				return (&s[n]);
		}
	}
	return (NULL);
}
