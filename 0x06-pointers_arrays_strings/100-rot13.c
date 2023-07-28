#include "main.h"
/**
 *rot13 - encode a string to rot13
 *@s: string to encode
 *Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while (a[i] != '\0' && s[j] != a[i])
		{
			i++;
		}
		if (s[j] == a[i])
		{
			s[j] = b[i];
		}
	}
	return (s);
}
