#include "main.h"

/**
 * the_sqrt_recur - calculate squeare root of n from 0
 * @n: interger
 * @r: iterator
 * Return: the square root
 */

int the_sqrt_recur(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	else
		return (the_sqrt_recur(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: interger
 * Return: a natural square root else -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_sqrt_recur(n, 0));

}
