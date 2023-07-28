#include "main.h"

/**
 *leet - encode string into 1337
 *@n: input value
 *
 *Return: n value
 */
char *leet(char *n)
{
	int l, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[l] == s1[m])
			{
				n[l] = s2[m];
			}
		}
	}
	return (n);
}
