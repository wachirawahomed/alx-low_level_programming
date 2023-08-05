#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments.
 * @agrv: pointer to argument arrays.
 * Return: always 0.
 */

int main(int argc, char *agrv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
