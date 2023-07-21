#include "main.h"

/*
 * print_most_numbers - prints the numbers from 0-9, skips 2 and 4.
 *@n: charater to be printed
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
			_putchar(n);
	}
	_putchar('\n');
}
