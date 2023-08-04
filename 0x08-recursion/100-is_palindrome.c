#include "main.h"

/**
 * palindrome - compares the first and last character in a string
 * @al: first index in string
 * @om: last index in a string.
 * Return: 1 if string is a palindrome, 0 otherwise.
 */

int palindrome(char *al, char *om)
{
	if (*al >= *om)
		return (1);
	if (*al == *om)
		return (palindrome(al + 1, om - 1));
	else
		return (1);
}


/**
 * _slength - finds lenght of the string
 * @s: string
 * Return: lenth of string.
 */

int _slength(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + (_slength(s)));
	}
	else
		return (0);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 if true otherwise 0
 */

int is_palindrome(char *s)
{
	int l = _slength(s);

	return (palindrome(s, (s + (l - 1))));
}

