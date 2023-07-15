#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alnum;

	for (alnum = '0'; alnum <= '9'; alnum++)
	{
		putchar(alnum);
	}
	for (alnum = 'a'; alnum <= 'f'; alnum++)
	{
		putchar(alnum);
	}
	putchar('\n');
	return (0);
}
