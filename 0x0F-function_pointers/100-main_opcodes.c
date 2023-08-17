#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its opcodes.
 * @argc: number of arguments present
 * @argv: an array of arguments present
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int no_bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_bytes = atoi(argv[1]);
	if (no_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;
	for (i = 0; i < no_bytes; i++)
	{
		printf("%02hhx\n", array[i]);
	}
	printf("\n");

	return (0);
}
