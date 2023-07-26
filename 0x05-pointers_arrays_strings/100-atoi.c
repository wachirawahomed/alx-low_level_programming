#include "main.h"
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer.
 *@s: a string.
 *
 * Return: converted string.
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, res = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' &&  s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
		}
	}
	return (res * sign);
}
