#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array
 * @n: number of elements in the arry
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = temp;
	}


}
