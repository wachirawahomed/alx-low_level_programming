#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[index] - '0');
	}
	return (dec_v);
}