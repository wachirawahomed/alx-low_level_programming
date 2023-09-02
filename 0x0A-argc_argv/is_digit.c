#include "main.h"
#include <string.h>

/**
 * is_digit - checks if a given char is number or not
 * @s: the character to be exaimed.
 * Return: if it's not a number return 1, otherwise 0
 */

int is_digit(char *s)
{
	int i, no, len;

	i = 0;
	no = 0;
	len = strlen(s);
	while (i < len)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		else
			no = no * 10 + (s[i] - '0');
		i++;
	}
	return (no);
}
