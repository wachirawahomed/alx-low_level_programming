#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; ++al)
	{
		printf("%c ", al);
	}
	for (al = 'A'; al <= 'Z'; ++al)
	{
		printf("%c ", al);
	}
	return (0);

}
