#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 *
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		current = exclusive >> index;
		if (current & 1)
			count++;
	}

	return (count);
}
