#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 *
 * Return: the number of bytes that compose the length
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	int m;
	unsigned int l;

	l = 0;
	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0' && accept[m] != s[n]; m++)
			;
		if (s[n] == accept[m])
			l++;
		if (accept[m] == '\0')
			return (l);
	}
	return (l);
}
