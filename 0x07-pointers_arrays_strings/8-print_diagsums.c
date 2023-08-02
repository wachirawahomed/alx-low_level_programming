#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix intergers
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sumc = 0;
	int sumr = 0;
	int r;

	for (r = 0; r < size; r++)
	{
		index = (r * size) + r;
		sumc += a[index];
	}

	for (r = 1; r <= size; r++)
	{
		index = (r * size) - r;
		sumr += a[index];
	}

	printf("%d, %d\n", sumc, sumr);

}
