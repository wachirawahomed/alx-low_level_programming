#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination string pointer
 *@src: source string pointer
 *Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
