#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to be examine
 * @c: character being searched for
 * Return: pointer 1st occurrence of the character or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
