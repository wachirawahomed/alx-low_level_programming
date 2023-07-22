#include "main.h"

/**
 * print_triangle - use # to print the triangle
 * @size: Size of triangle
 *
 */

void print_triangle(int size)
{
	int h, w, d;

	if (size <= 0)
	_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
			_putchar(' ');

		for (d = 1; d <= h; d++)
			_putchar('#');

	_putchar('\n');
	}
}
