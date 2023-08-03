#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number.
 * Return: factorial of n, unless n is less than 0 where
 * it returns -1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
