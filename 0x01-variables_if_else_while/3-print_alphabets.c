#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	while (al < 'z')
	{
		putchar(al);
		al++;
	}
	while (al < 'Z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);

}
