#include "main.h"

/**
 * rev_string - function that reverses a string.
 *@s: string
 *return: 0 always
 */
void rev_string(char *s)
{
	int i, len, temp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
