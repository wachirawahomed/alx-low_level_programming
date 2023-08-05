#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * is_digit - checks if a given char is number or not
 * @s: character to be examined
 * Return: if it's not a number return 1, otherwise no
 **/

int is_digit(char *s)
{
	int i, no, len;

	i = 0;
	no = 0;
	len = strlen(s);
	while (i < len)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (-1);
		}
		else
			no = no * 10 + (s[i] - '0');
		i++;
	}
	return (no);
}

/**
 * *main - add positive numbers
 * *@argc: number of argements
 * *@argv: pointer to array of arguments
 * *Return: result of addition or 1
 * **/

int main(int argc, char *argv[])
{
	int id, no, total;

	total = 0;
	for (id = 1; id < argc; id++)
	{
		no = is_digit(argv[id]);
		if (no <= -1)
		{
			printf("Error\n");
			return (1);
		}
		total = total + no;
	}
	printf("%d\n", total);
	return (0);
}
