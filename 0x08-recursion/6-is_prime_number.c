#include "main.h"
/**
 * iprime_num - checks if an integer is prime
 * @n:the integer
 * @div: Divisor
 * Return: 1 if n is a prime number, 0 if not.
 */

int iprime_num(int n, int div)
{
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	else
		return (iprime_num(n, div - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: an integer.
 * Returns: 1 if n is a prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (iprime_num(n, n - 1));
}
