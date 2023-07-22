#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 */
void print_square(int size)
{
int h, w;
if (size > 0)
{
for (h = 1; h <= size; h++)
{
for (w = 1; w <= size; w++)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}
