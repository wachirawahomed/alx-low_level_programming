#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @x : integer that is computed.
 * Return: absolute value.
 *
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	return (x);
}
