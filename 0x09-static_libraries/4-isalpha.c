#include "main.h"
/**
 * _isalpha - checks for a letter, lowercase or uppercase.
 * @c: the character to be checked.
 * Return: 1 if check is successful, otherwice  0.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
