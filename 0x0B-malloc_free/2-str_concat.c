#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: pointer memory containing new string, NULL if string is empty
 * NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int len, i, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (n = 0; s2[n] != '\0'; n++)
		len++;

	cat = malloc(len * sizeof(char));
	if (cat == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		cat[len] = s1[i];
		len++;
	}
	for (n = 0; s2[n] != '\0'; n++)
	{
		cat[len] = s2[n];
		len++;
	}
	cat[len] = '\0';
	return (cat);
	free(cat);
}


