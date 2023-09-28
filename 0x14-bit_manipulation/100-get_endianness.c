#include "main.h"
/**
 * get_endianness -a function checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int index;
	char *test;

	index = 1;
	test = (char *)&index;
	return (*test);
}
