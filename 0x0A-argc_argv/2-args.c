#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives.
 * @argc: number of arguements
 * @argv: pointer to array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int index;

	if (argc > 0)
	{
		for (index = 0; index < argc; index++)
			printf("%s\n", argv[index]);
	}
	return (0);
}
