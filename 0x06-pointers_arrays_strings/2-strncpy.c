#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be copied
 * return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_byte;

	for (len_byte = 0; len_byte < n && src[len_byte] != '0'; len_byte++)
	{
		dest[len_byte] = src[len_byte];
	}

	for (; len_byte < n; len_byte++)
	{
		dest[len_byte] = '\0';
	}

	return (dest);

}
