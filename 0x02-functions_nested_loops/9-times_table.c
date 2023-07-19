#include "main.h"
/**
 *times_table -  prints the 9 times table
 *
 **/

void times_table(void)
{
	int number, multiple, product, mod;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiple;
			mod = product % 10;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((product / 10) + '0');

			_putchar(mod + '0');
		}
		_putchar('\n');
	}
}
