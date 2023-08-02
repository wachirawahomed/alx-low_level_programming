#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string
 * @haystack: string to search for
 * @needle: substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h && *n)
	{
		if (*h == *n)
		{
			n++;
			h++;
		}
		else
			break;
	}
	if (*n == '\0')
		return (haystack);
	haystack++;

	return (0);
}

