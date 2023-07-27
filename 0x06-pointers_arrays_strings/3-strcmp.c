#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return:
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	if (s1 < s2)
	{
		res = -15;
	}
	else if (s1 > s2)
	{
		res = 15;
	}
	else
	{
		res = 0;
	}

	return res;
}
