#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: an integer
 * @y: power of the integer
 * Return: if y is less than 0 returns -1, else it returns value of
 * value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y < 0)
		return (-1);
	else
		return (1);
}
