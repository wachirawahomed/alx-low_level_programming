#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: max number of byte for s2.
 * Return: pointer to concanatedstring.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, len;
	int num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		i++;

	len = (num + i + 1);
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	j = 0;
	while (j < num && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++, j++;
	}

	ptr[i] = '\0';
	return (ptr);
}
