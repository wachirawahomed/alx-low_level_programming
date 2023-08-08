#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: pointer to a string
 * Return: NULL if str = NULL or insufficient memory,
 * On success a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplt;
	int n;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		len++;

	duplt = malloc(len * sizeof(*str));
	if (duplt == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		duplt[n] = str[n];

	return (duplt);
	free(duplt);
}
