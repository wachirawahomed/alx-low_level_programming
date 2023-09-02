#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: no of bytes to be concatenated
 * Return: pointer to destination string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int l;

	while (dest[dest_len] != '\0')
		dest_len++;
			for (l = 0; l < n && src[l] != '\0'; l++)
			{
				dest[dest_len] = src[l];
			}
	return (dest);
}
