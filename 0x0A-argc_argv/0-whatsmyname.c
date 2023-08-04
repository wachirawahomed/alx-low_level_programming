#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of arguements
 * @argv: pointer to array of arguments
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	printf("%s\n", argv[0]);

	return (0);
}
