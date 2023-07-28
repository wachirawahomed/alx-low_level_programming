#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @p: the string to be checked and converted to uppercase
 * Return: the converted string
 */

char *string_toupper(char *p)
{
	int index;

	for (index = 0; p[index] != '\0'; index++)
	{
		if (p[index] >= 'a' && p[index] <= 'z')
			p[index] = p[index] - 32;
	}
	return (p);

}
