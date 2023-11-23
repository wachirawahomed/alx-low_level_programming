#include "main.h"

/**
 * get_endianness -a function checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return (*test);
}
