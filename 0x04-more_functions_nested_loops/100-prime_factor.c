#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	int div = 2;

	while (div < num)
	{
		if (num % div == 0)
		{
			num /= div;
		}
		else
			div++;
	}
	printf("%lu\n", num);
	return (0);
}
