#include "variadic_functions.h"
/**
 * sum_them_all - sum's of all its parameters.
 * @n: number of arguments
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list list;

	va_start(list, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}	
