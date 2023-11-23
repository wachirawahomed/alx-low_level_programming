#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed in binary representation
 */

void print_binary(unsigned long int n)
{
	int index, count = 0;
	unsigned long int cur;

	for (index = 63; index >= 0; index--)
	{
		cur = n >> index;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
